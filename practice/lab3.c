#include<stdio.h>
int main(){
    int n,i,t=0,m=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
   }
    for(i=0;i<n;i++){
        if(a[i]==-1){
            if(m==0){
                t++;
            }
            else{
            m--;
            }
        }
        else{
            m=m+a[i];
        }
    }
    printf("%d",t);
}