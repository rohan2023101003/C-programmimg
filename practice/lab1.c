#include<stdio.h>
#include<stdlib.h>
int** createMatrix(int row,int col){
    int** matrix= (int**)calloc(row,sizeof(int*)); //matrix is pointer to whole matrix
    for(int i=0;i<col;i++){
        matrix[i]=(int*)calloc(col,sizeof(int)); //matrix[i] is pointer to ith arrow of matrix
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    return matrix;
}
void print(int** matrix,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}
int** transpose(int** matrix,int row,int col){
    int** m=(int**)calloc(col,sizeof(int**));
    for(int i=0;i<col;i++){
        m[i]=(int*)calloc(row,sizeof(int));
    }
     for(int i=0;i<col;i++){
        for(int j=0;j<row;j++){
            m[i][j]=matrix[j][i];
        }
    }
    return m;
}
int main(){
    int r,c;
    scanf("%d %d",&r,&c);
    int** m=createMatrix(r,c);
    print(m,r,c);
    int** m1=transpose(m,r,c);
    print(m1,c,r);
    return 0;
}