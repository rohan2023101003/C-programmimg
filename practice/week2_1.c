#include <stdio.h>
int main(){
    int n,s,l,m;
    scanf("%d",&n);
    scanf("%d",&s);
    if (n%2 == 0)
    {
        l = (n+2)/2;
        printf("%d",s/l); 
    }
    else{
        m = (n+1)/2;
        printf("%d",s/m);

    }
    return 0;
    

}