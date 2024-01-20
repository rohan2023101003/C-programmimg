#include<stdio.h>
int sum();
void main(){
    printf("%d",sum());
}
int sum(){
    int a=9,b=8;
    int sum=a+b;
    return sum;
}