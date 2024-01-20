#include<stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=1;j<=i+n;j++){
            if(i+j>=n){
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