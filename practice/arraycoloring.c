#include<stdio.h>
int main(){
    int i,j,e=0,o=0,t;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        int n;
        scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;  }
    }
    if(e==n){
        printf("YES\n");
    }
    else{
        if(o%2==0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    o=0;
    e=o;
    }
    return 0;
}