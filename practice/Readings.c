#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE* ptr;
    ptr= fopen("abc","w");
    int d;
    //  fscanf(ptr,"%d",&d);
    // while(!feof(ptr)){
    //    //  printf("%d",d);
    //     fprintf(ptr,"%d",&d);   
    // }
    d=5;
    fprintf(ptr,"%d",d);
}