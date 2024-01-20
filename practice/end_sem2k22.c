#include<stdio.h>
#include<string.h>
int main(){
    char str[100000];
    gets(str);
    printf("%s",str);
    int n=strlen(str);
    int c=0;
    for(int i=0;i<n;i++){
        int a=str[i];
        if(a>=65 && a<=90){
            c++;
        }
    }
    printf("%d\n",c);
}