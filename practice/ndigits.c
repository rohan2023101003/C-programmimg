#include <stdio.h>
int main()
{
    int n,d=0;
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        d++;
    }
    printf("%d",d);
    return 0;
}