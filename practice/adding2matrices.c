#include<stdio.h>
int main(){
    int m1,n1,m2,n2,i,j,sum;
    printf("enter no. of rows of matrix 1:");
    scanf("%d",&m1);
    printf("enter no. of columns of matrix 1:");
    scanf("%d",&n1);
    int a1[m1][n1];
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            scanf("%d",&a1[i][j]);
        }
    }
    printf("the original matrix 1 is:\n");
    for(i=0;i<m1;i++){
        for(j=0;j<n1;j++){
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }
    printf("enter no. of rows of matrix 2:");
    scanf("%d",&m2);
    printf("enter no. of columns of matrix 2:");
    scanf("%d",&n2);
    int a2[m2][n2];
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            scanf("%d",&a2[i][j]);
        }
    }
    printf("the original matrix 2 is:\n");
    for(i=0;i<m2;i++){
        for(j=0;j<n2;j++){
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    if(m1==m2 && n1==n2){
        printf("addition of matrices 1 and 2 is:\n");
        int a[m1][n1];
        for(i=0;i<m1;i++){
            for(j=0;j<n1;j++){
                a[i][j]=a1[i][j]+a2[i][j];
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }
    }
    else{
        printf("addition of matrices is not possible");
    }

    return 0;
}