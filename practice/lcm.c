#include <stdio.h>
int main()
{
    
    if(a>b){
        while(c<1){
            m=a*i;
            if(m%b==0){
                printf("the lcm is:");
                printf("%d",m);
                c=c+1;
            }
            i=i+1;   
        }
    }
    else{
        while(c<1){
            m=b*i;
            if(m%a==0){
                printf("the lcm is:");
                printf("%d",m);
                c=c+1;
            }
            i=i+1;
        }
    }
    return 0;
}