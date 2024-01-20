#include <stdio.h>
int main()
{
    int f0=0,f1=1,f2,c,n;
    scanf("%d",&n);
    printf("0\n");
    for(c=1;c<n;c++){
        f2=f1+f0;
        f0=f1;
        f1=f2;
        printf("%d\n",f0);
        
    }
    return 0;
}