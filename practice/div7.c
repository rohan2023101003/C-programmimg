#include <stdio.h>
int main()
{
    int a;
    scanf("%d",& a);
    if(a%7==0){
        printf("the number %d is divisible by 7", a);
    }
    else
    {
       printf("the number %d is not divisible by 7", a);
    }
    return 0;

}