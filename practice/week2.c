#include<stdio.h>
int main()
{
    int A,B;
    scanf("%d %d",&A,&B);
    if(B==A+1){
        if(B==4 || B==7){
            printf("NO");
        }
        else{
            printf("YES");
        }
    }
    else{
        printf("NO");
    }
    return 0;
    
}