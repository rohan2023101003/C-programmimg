#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Matrix {
    int        num_rows;
    int        num_cols;
   long long int**     data;
} Matrix;
Matrix* read_matrix_from_file(char file[]){
    strcat(file,".txt");
    FILE* fp;
    fp= fopen(file,"r");
    if(fp==NULL){
        printf("ERROR : INVALID ARGUMENT\n");
        exit(1);
    }
    Matrix* m = (Matrix*) malloc(sizeof(Matrix));
     int d;
     fscanf(fp,"%d",&d);
     m->num_rows= d;
      fscanf(fp,"%d",&d);
     m->num_cols= d;
     m->data = (long long int**) calloc(m->num_rows, sizeof(long long int*));
        for (int i =0; i < m->num_rows; i++) {
            m->data[i] = (long long int*) calloc(m->num_cols, sizeof(long long int));
            for(int j=0;j<m->num_cols;j++){
              fscanf(fp,"%d",&d);
              m->data[i][j] = d;
            }
    }
     fclose(fp);
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
    char file[50];
    scanf("%s",file);
    // Matrix* M=read_matrix_from_file(file);
    // print_matrix(M);
    strcat(file,".txt");
    FILE* fp;
    fp= fopen(file,"r");
    int r,c;
     fscanf(fp, "%d %d", &r, &c);
     printf("%d %d ",r,c);
int d;
    // Read the matrix elements
    for (int i = 0; i < r; i++) {
        for(int j=0;j<c;j++){

            fscanf(fp, "%d", &d);
            printf("%d ",d);
        }
    }
   fclose(fp);
    return 0;
}