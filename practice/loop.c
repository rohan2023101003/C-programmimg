#include<stdio.h>
int main(){
    int n,i=1;
    scanf("%d",&n);
    while(i<=n){
        printf("%d\t",2*i-1);
        i++;
    }
    return 0;
}