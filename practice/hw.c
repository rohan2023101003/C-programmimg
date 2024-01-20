#include <stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct Matrix {
    int        num_rows;
    int        num_cols;
   long long int**     data;
} Matrix;
void destroy_matrix(Matrix* m){
    int r=  m->num_rows;
    for (int i =0; i < r; i++) {
       free(m->data[i]);
    }
    free(m->data);
    free(m);   
}
Matrix* create_matrix(int r, int c) {
    Matrix* m = (Matrix*) malloc(sizeof(Matrix));
    m->num_rows =r;
    m->num_cols = c;
    m->data = (long long int**) calloc(r, sizeof(long long int*));
    for (int i =0; i < r; i++) {
        m->data[i] = (long long int*) calloc(c, sizeof(long long int));
    }
    return m;
}
Matrix* scan_matrix(int r,int c){
    Matrix* m= create_matrix(r,c);
     for (int i =0; i < r; i++) {
        for(int j=0;j<c;j++){
           scanf("%lld",&(m->data[i][j]));
        }
    }
    return m;
}
Matrix* read_matrix_from_file(char file[]){
    FILE* fp;
    fp= fopen(file,"r");
    if(fp==NULL){
        printf("ERROR : INVALID ARGUMENT\n");
        return NULL;
    }
     int r,c;
     fscanf(fp,"%d %d",&r,&c);
    Matrix* m= create_matrix(r,c);
        for (int i =0; i <r; i++) {
            for(int j=0;j<c;j++){
              fscanf(fp,"%lld",&(m->data[i][j]));
            }
    }
    fclose(fp);
    return m;
}
void  write_matrix_to_file(char file[],Matrix* M){
    FILE* fp;
    fp= fopen(file,"w");
    if(fp==NULL){
        printf("ERROR : INVALID ARGUMENT\n");
        return;
    }
    fprintf(fp,"%d %d\n",M->num_rows,M->num_cols);
     for (int i =0; i < M->num_rows; i++){
            for(int j=0;j<M->num_cols;j++){
              fprintf(fp,"%lld ",M->data[i][j]);
            }
            fputc('\n',fp);
    }
    fclose(fp);
}
long long int determinant(Matrix* M){
    int m=M->num_rows;
        if(m<3){
            if(m==1) return M->data[0][0];
            if(m==2) return M->data[0][0]*M->data[1][1]-M->data[0][1]*M->data[1][0];
        }
        else{
            long long int ans=0;
            int sign =1;
            int a=0;int b=0;
                for (int i = 0; i < m; i++) {
                    int basic= M->data[0][i];
                    Matrix* q= create_matrix(m-1,m-1);
                    for (int j = 0; j < m; j++) {
                        if(j==0) continue;
                        for (int k = 0; k < m; k++) {
                            if (k==i) continue; 
                            q->data[a][b] = M->data[j][k];
                            b++;
                        }
                        a++;
                        b=0;
                    }
                    a=0;
                    b=0;
                    ans = ans + sign *basic* determinant(q);
                    sign = -sign;
                    destroy_matrix(q);
                }
            return ans;
        }
}
Matrix* add_matrix(Matrix* A, Matrix* B) {
   int r1= A->num_rows;
   int c1= A->num_cols;
   int r2=B->num_rows;
   int c2=B->num_cols;
   if(r1==r2 && c1==c2){
    Matrix* m3=create_matrix(r1,c1);
    for (int i =0; i < r1; i++) {
        for(int j=0;j<c1;j++){
        m3->data[i][j]=A->data[i][j]+B->data[i][j];
        }
    }
    return m3;
   }
   return NULL;
}
Matrix* mult_matrix(Matrix* A, Matrix* B) {
   int r1= A->num_rows;
   int c1= A->num_cols;
   int r2=B->num_rows;
   int c2=B->num_cols;
   if(c1==r2){
    Matrix* m3=create_matrix(r1,c2);
     for (int i =0; i < r1; i++) {
        for(int j=0;j<c2;j++){
          int sum=0;
          for(int k=0;k<r2;k++){
             sum = sum + A->data[i][k]*B->data[k][j];
          }
          m3->data[i][j]=sum;
        }
    }
    return m3;
   }
   return NULL;
}
Matrix* scalar_mult_matrix(long long int s, Matrix* M) {
   int r= M->num_rows;
   int c= M->num_cols;
    Matrix* m = create_matrix(r,c);
    for (int i =0; i < r; i++) {
        for(int j=0;j<c;j++){
        m->data[i][j]= s*M->data[i][j];
        }
    }
    return m;
}
Matrix* transpose_matrix(Matrix* A) {
   int r= A->num_rows;
   int c= A->num_cols;
    Matrix* m = create_matrix(c,r);
    for (int i =0; i < c; i++) {
        for(int j=0;j<r;j++){
        m->data[i][j]=A->data[j][i];
        }
    }
    return m;
}

void print_matrix(Matrix* m) {
    if(m==NULL)  printf("ERROR: INVALID ARGUMENT\n");
    else{
    printf("%d %d\n", m->num_rows, m->num_cols);
    for (int i = 0; i < m->num_rows; i++) {
        for (int j = 0; j < m->num_cols; j++) {
            printf("%lld ", m->data[i][j]);
        }
        printf("\n");
    }
    }
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        char str[50];
        scanf("%s",str);
         FILE* fph;
        fph= fopen("mx_history","a");
        if(strcmp(str,"history")==0){
            fprintf(fph,"LOG::%s\n",str);
            fclose(fph);
            char ch;
            FILE* ptr;
            ptr=fopen("mx_history.txt","r");
            while(!feof(ptr)){
                ch= fgetc(ptr);
                printf("%c",ch);
            }
            fclose(fph);
            continue;
        }
        int ad;
        scanf("%d",&ad);
        fprintf(fph,"LOG::%s %d\n",str,ad);
        fclose(fph);
        if(strcmp(str,"add_matrix")==0){
        if(ad==0){
            int n1,m1;
            scanf("%d %d",&n1,&m1);
            Matrix* M1 = scan_matrix(n1,m1);
            int n2,m2;
            scanf("%d %d",&n2,&m2);
            Matrix* M2= scan_matrix(n2,m2);
            Matrix* M3= add_matrix(M1,M2);
            print_matrix(M3);
            destroy_matrix(M1);
            destroy_matrix(M2);
            if(M3==NULL) free(M3);
            else destroy_matrix(M3);
        }
        if(ad==1){
            char file1[150];
            scanf("%s",file1);
            char file2[150];
            scanf("%s",file2);
            char file3[150];
            scanf("%s",file3);
            Matrix* M1= read_matrix_from_file(file1);
            if(M1==NULL){
                free(M1);
                continue;
            }
            Matrix* M2= read_matrix_from_file(file2);
            if(M2==NULL){
                free(M2);
                continue;
            }
            Matrix* M3= add_matrix(M1,M2);
            if(M3==NULL){
                free(M3);
                printf("ERROR: INVALID ARGUMENT\n");
                continue;
            }
            write_matrix_to_file(file3,M3);
            destroy_matrix(M1);
            destroy_matrix(M2);
            destroy_matrix(M3);
        }
    }
    if(strcmp(str,"mult_matrix")==0){
        if(ad==0){
            int n1,m1;
            scanf("%d %d",&n1,&m1);
            Matrix* M1 = scan_matrix(n1,m1);
            int n2,m2;
            scanf("%d %d",&n2,&m2);
            Matrix* M2= scan_matrix(n2,m2);
            Matrix* M3= mult_matrix(M1,M2);
            print_matrix(M3);
            destroy_matrix(M1);
            destroy_matrix(M2);
            if(M3==NULL) free(M3);
            else destroy_matrix(M3);
        }
        if(ad==1){
            char file1[150];
            scanf("%s",file1);
            char file2[150];
            scanf("%s",file2);
            char file3[150];
            scanf("%s",file3);
            Matrix* M1= read_matrix_from_file(file1);
            if(M1==NULL){
                free(M1);
                continue;
            }
            Matrix* M2= read_matrix_from_file(file2);
            if(M2==NULL){
                free(M2);
                continue;
            }
            Matrix* M3=mult_matrix(M1,M2);
            if(M3==NULL){
                free(M3);
                 printf("ERROR: INVALID ARGUMENT\n");
                continue;
            }
            write_matrix_to_file(file3,M3);
            destroy_matrix(M1);
            destroy_matrix(M2);
            destroy_matrix(M3);
           
        }
    }
    if(strcmp(str,"scalar_mult_matrix")==0){
      if(ad==0){
            long long int s;
            scanf("%lld",&s);
            int n,m;
            scanf("%d %d",&n,&m);
            Matrix* M =scan_matrix(n,m);
            Matrix* M3= scalar_mult_matrix(s,M);
            print_matrix(M3);
            destroy_matrix(M);
            destroy_matrix(M3);
      }
      if(ad==1){
            long long int s;
            scanf("%lld",&s);
            char file1[150];
            scanf("%s",file1);
             char file2[150];
            scanf("%s",file2);
            Matrix* M1= read_matrix_from_file(file1);
            if(M1==NULL){
                free(M1);
                continue;
            }
            Matrix* M2= scalar_mult_matrix(s,M1);
            write_matrix_to_file(file2,M2);
            destroy_matrix(M1);
            destroy_matrix(M2);
      }
   }
   if(strcmp(str,"transpose_matrix")==0){
        if(ad==0){
            int n,m;
            scanf("%d %d",&n,&m);
            Matrix* M = scan_matrix(n,m);
            Matrix* M3= transpose_matrix(M);
            print_matrix(M3);
            destroy_matrix(M);
            destroy_matrix(M3);
        }
        if(ad==1){
                char file1[150];
                scanf("%s",file1);
                char file2[150];
                scanf("%s",file2);
                Matrix* M1= read_matrix_from_file(file1);
                if(M1==NULL){
                  free(M1);
                  continue;
                }
                Matrix* M2= transpose_matrix(M1);
                write_matrix_to_file(file2,M2); 
                destroy_matrix(M1);
                destroy_matrix(M2);
        } 
    }
    if(strcmp(str,"determinant")==0){
      if(ad==0){
            int n,m;
            scanf("%d %d",&n,&m);
            Matrix* M = scan_matrix(n,m);
            if(n==m){
            long long int det= determinant(M);
            printf("%lld\n",det);
            }
            else{
             printf("ERROR: INVALID ARGUMENT\n");   
            }
             destroy_matrix(M);
        }
       if(ad==1){
            char file1[150];
            scanf("%s",file1);
            Matrix* M1= read_matrix_from_file(file1);
            if(M1==NULL){
                  free(M1);
                  continue;
            }
            int n= M1->num_rows;
            int m=M1->num_cols;
             if(n==m){
                long long int det= determinant(M1);
                printf("%lld\n",det);
            }
            else{
              printf("ERROR: INVALID ARGUMENT\n");   
            }
             destroy_matrix(M1);
       }
    }
    }
  return 0;
} 