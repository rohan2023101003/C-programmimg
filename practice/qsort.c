//write a cprogram to sort the given array using quick sort
// Date: 03/07/2021
// Created by vishal choubey
 #include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
    }
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        }
    qsort(a,n,sizeof(int),compare);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
        }
    return 0;
    }