#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        i++;
    }
    printf("%d",i);//gives no.of digits of a number only upto 10 digits
    return 0;
}