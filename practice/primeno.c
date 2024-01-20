#include<stdio.h>
int main()
{
    int n,i,j,c=1;
    scanf("%d",&n);
    printf("%d\n",2);
    for(i=1;i<=n*n;i++){
        if(c==n){
            break;
        }
        for(j=2;j<i;j++){
            if(i%j==0){
                break;
            }
            if(i==j+1){
                printf("%d\n",i);
                c++;
            }
            
        }
    }
    return 0;
}