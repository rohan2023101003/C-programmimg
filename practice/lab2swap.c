#include<stdio.h>
int main()
{
    int x,y,k,a,b,i,p=1;
    scanf("%d %d %d",&x,&y,&k);
    for(i=0;i<k;i++){
        if(i==0){
            a=x&1;
            b=y&1;
            x=(x-a)+b;
        }
        else{
            p=p*2;
            a=x&p;
            b=y&p;
            x=(x-a)+b;
        }
    }
    printf("%d",x);
    return 0;
}