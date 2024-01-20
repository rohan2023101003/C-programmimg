#include<stdio.h>
int main()
{
    int n,m,p,q,i=0,rem,sum=0;
    printf("enter a number");
    scanf("%d",&n);
   while(n!=0)
   {
    rem=n%10;
    n=n/10;
    sum=sum+rem;
   }
   if(sum=n)
   {
    printf("palindromee");
   }
   else
   {
printf("not divisible");
   }

}