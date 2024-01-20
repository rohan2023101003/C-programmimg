#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
    }
int main(){
    char str[8];
    scanf("%s",str);
    int n= strlen(str);
    int arr[n];
    for(int i=0;i<n;i++){
        int a=str[i];
        arr[i]=a;

    }
    qsort(arr,n,sizeof(int),compare);
    
    char str1[n];
    for(int j=0;j<n;j++){
        char b= arr[j];
        str1[j]=b;
    }
    printf("%s",str1);
    return 0;
}