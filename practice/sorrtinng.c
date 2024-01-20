#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int compare(const void* a,const void* b){
    return strcmp(a,b);
}
int main(){
    char str[][9]={"amla","ball","aabgajhsu"};
    qsort(str,3,(sizeof(char))*9,compare);
    for(int i=0;i<3;i++){
    printf("%s ",str[i]);
    }
}