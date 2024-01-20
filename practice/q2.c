#include <stdio.h>
int main()
{
    int x,y,z;
    scanf("%d,%d",&x,&y);
    if(x>y){
        z=x-y;
    }
    else{
        z=y-x;
    }
    printf("%d",z);
    return 0;
}