#include<stdio.h>
int* returnpointer(int[]);
void main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    int* p;
    p=returnpointer(a);
    p=p+1;
    p=a+2;
    printf("%d",*p);
    
}
int* returnpointer(int b[]){
    return b+2;
}