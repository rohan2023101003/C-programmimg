#include<stdio.h>
char* display();
void main(){
   char* s;
    s= display();
    printf("%s",s);
    s[1]='R';
   printf("%s",s);
    
    
}
char* display(){
    
     
     static char str[100];
     scanf("%[^\n]s",str);
    

    return str;
}