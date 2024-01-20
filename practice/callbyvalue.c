#include<stdio.h>
void fun(int*,int*);
void main(){
    int x=9,y=4;
    func(&x,&y);
 printf("%d%d",x,y);

}
void func(int*x,int*y){
    *x=7;
    *y=8;
    printf("%d%d",*x,*y);
}