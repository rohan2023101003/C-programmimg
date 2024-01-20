#include <stdio.h>
int main()
{
    int a,b,p,q;
    scanf("%d,%d",&a,&b);
    q=a*b;
    if(a<b){
        a=b;
    }
    while(p!=0){
        p=a%b;
        a=b;
        b=p;
    }
    printf("gcd is:");
    printf("%d\n",a);
    printf("lcm is:");
    printf("%d",q/a);
    return 0;
}