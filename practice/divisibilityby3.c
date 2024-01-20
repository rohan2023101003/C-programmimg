#include<stdio.h>
int main(){
    int sum=0,i,n,b;
    char c;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%c",&c);
        b= c-48;
        sum= sum + b;

    }
    if(sum%3==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}