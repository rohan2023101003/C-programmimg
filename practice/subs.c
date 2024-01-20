#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int c=1;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(int k=i;k<=j;k++){
                printf("%d ",k);
            } 
        printf("\n");
        }
    }
}