#include <stdio.h>
int main()
{
    int a=1,c=0,p=0,n,i;
    scanf("%d",&n);
    while(n!=p){
        for(i=1;i<=a;i++){
            if(a%i==0){
                c=c+1;
            }
        }
        if(c==2){
            printf("%d\t",a);
            p=p+1;
        }
        a=a+1;
    }
    return 0;
}