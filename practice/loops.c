#include <stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<a;i++){
        if(a%i==0){
            printf("not \n");
        }
        else{
            printf("prime\n");
        }
    }    
    if(a==2)
      printf("prime\n");    
    return 0;
}