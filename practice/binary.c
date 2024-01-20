#include<stdio.h>
int main()
{
    int n,bin=0,x=0,y=1,i,rem;
    scanf("%d",&n);
    while(n>0)
    {
        for(i=0;i<x;i++)
        {
            y=y*10;

        }
        rem=n%2;
        bin=bin+rem*y;
        n=n/2;
        x+=1;
    }
    printf("%d",bin);
    return 0;
}