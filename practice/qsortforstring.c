#include<stdio.h>
#include<string.h>
int main(){
    char s[9];
    scanf("%s",s);
    char str[9][9];
    strcpy(str[1],s);
    printf("%s\n",str[1]);
    return 0;


}