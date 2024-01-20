#include<stdio.h>
int main(){
    int i,j,n,m=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m=1;
        for(j=1;j<=n;j++){
            if(i+j>n){
            printf("%d",m);
            m++;
            }
            else{
                printf(" ");
            }
            if(j==n){
            for(int k=i-1;k>=1;k--){
                printf("%d",k);
            }
            }
        }
    
        printf("\n");
    }
    return 0;
}