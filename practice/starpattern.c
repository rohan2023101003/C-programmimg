#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);//n should be odd
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j){
                printf("*");
            }
            if(i+j==n+1){
                printf("*");
            }
            else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}