#include<stdio.h>
int sum(int[],int );
int main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("%d", sum(arr,n));
    return 0;
}
int sum(int marks[],int a){
    int i,s=0;
    for(i=0;i<a;i++){
        s=s+marks[i];
    }
    return s;
}