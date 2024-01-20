#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char ch;
    FILE* ptr;
    ptr=fopen("history.txt","r");
    while(!feof(ptr)){
        ch= fgetc(ptr);
        printf("%c",ch);
    }
}