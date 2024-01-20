#include<stdio.h>
int main()
{
    int n,i,fact=1;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        fact=fact*(n-i);      
    }
    printf("%d",fact);
    return 0;
}