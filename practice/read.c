#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef struct Matrix {
    int        num_rows;
    int        num_cols;
   long long int**     data;
} Matrix;
Matrix* create_matrix(int r, int c) {
    Matrix* m = (Matrix*) malloc(sizeof(Matrix));
    m->num_rows =r;
    m->num_cols = c;
    m->data = (long long int**) calloc(r, sizeof(long long int*));
    for (int i =0; i < r; i++) {
        m->data[i] = (long long int*) calloc(c, sizeof(long long int));
        for(int j=0;j<c;j++){
        scanf("%lld",&(m->data[i][j]));
        }
    }
    return m;
}
Matrix* read_matrix_from_file(char file[]){
    strcat(file,".txt");
    FILE* fp;
    fp= fopen(file,"r");
    if(fp==NULL){
        printf("ERROR : INVALID ARGUMENT\n");
    }
    else{
    Matrix* m = (Matrix*) malloc(sizeof(Matrix));
     int r,c;
     fscanf(fp,"%d %d",&r,&c);
     m->num_rows= r;
     m->num_cols= c;
     int d;
     m->data = (long long int**) calloc(r, sizeof(long long int*));
        for (int i =0; i <r; i++) {
            m->data[i] = (long long int*) calloc(c, sizeof(long long int));
            for(int j=0;j<c;j++){
              fscanf(fp,"%d",&d);
              m->data[i][j] = d;
            }
    }
     fclose(fp);
    return m;
    }
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
    char str[100];
    scanf("%s",str);
   Matrix* M= read_matrix_from_file(str);
   print_matrix(M);
    return 0;

}