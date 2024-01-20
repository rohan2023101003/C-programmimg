#include<stdio.h>
int main()
{
    int p;
    p = 60;
    printf("%d,%d,%d,%d",~p,p>>2,p>>3,p>>8); //~negation operator gives the 2's complement
    return 0;
}