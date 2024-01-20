#include<stdio.h>
void swap(char*,char*);
int main(){
    char str[3]="abc";
    swap((str+1),(str+2));
    printf("%s\n",str);
    return 0;
    

}
void swap(char *m,char *n){
    // *m = *m ^ *n;
    // *n = *m ^ *n;
    // *m = *m ^ *n;
    int a= *m;
   int b= *n;
   a = a^b;
   b = a^b;
   a = a^b;
   char c,d;
   *m= a;
   *n =b;
    //  char temp;
   //  temp = *x;
   //  *x = *y;
   //  *y = temp;

}