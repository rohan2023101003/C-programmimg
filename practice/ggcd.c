#include <stdio.h>
int main()
{
    int a,b,p;
    scanf("%d,%d",&a,&b);
    if(a<b){
        a=b;
    }
    while(b!=0){
        p=a%b;
        a=b;
        b=p;
    }
    printf("%d",a);
    return 0;

}