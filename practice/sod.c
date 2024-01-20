#include<stdio.h>
int main()
{
    int a,sum=0,rem;
    scanf("%d",&a);;//upto 10 digits only valid
    while(a!=0)
    {
        rem=a%10;
        sum = sum + rem;
        a=a/10;
    }
    printf("%d\n",sum);
    return 0;
}