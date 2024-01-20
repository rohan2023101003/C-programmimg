#include <stdio.h>
void main()
{
    int n,p,q,r;
    scanf("%d",&n);
    p=0;
    q=1;
    printf("0 ");
    for (int i = 1; i < n; i++)
    {
        r=p+q;
        p=q;
        q=r;
        printf("%d ",p);
    }
    

}