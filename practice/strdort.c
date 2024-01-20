//sorting an array of strings
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmpstring(const void *a,const void *b){

    return strcmp(a,b);
}
int main(){
    char str[3][9]={"gdgg","bus","uqw"};
    qsort(str,3,(sizeof(char))*9,cmpstring);
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",str[i]);
    }
    

}