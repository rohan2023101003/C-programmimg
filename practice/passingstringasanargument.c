#include<stdio.h>
void display(char[]);
void main(){
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    display(str);

}
void display(char str[]){
    printf("%s",str);
    for(int i=0;str[i]!='\0';i++){
        printf("%c\n",str[i]);
    }
}