#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<=i+n;j++){
            if(i+j>=n){
                if(i+j==n){
                    printf("1");
                }
                if((i+j)%2!=0){
                    printf(" ");
                }

            }
            else{
                printf("*");
            }

        }
        printf("\n");
    }
    return 0;
}