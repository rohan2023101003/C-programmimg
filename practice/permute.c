#include<stdio.h>
#include<string.h>
void swap_characters(char *m, char *n)
{
   int a= *m;
   int b= *n;
   a = a^b;
   b = a^b;
   a = a^b;
   char c,d;
   *m= a;
   *n =b;
}
int main(){
    char str[8];
    scanf("%s",str);
    int n=strlen(str);
    
    return 0;
}