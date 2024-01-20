#include<Stdio.h>
#define N 2
union abc{
    int a;
    char b;
    float c;
};
void main(){
    union abc u;
   u.a=N;
    u.b='q';
    u.c=99.5;
    printf("%d\n",u.a);
    printf("%c\n",u.b);
    printf("%f\n",u.c);
}