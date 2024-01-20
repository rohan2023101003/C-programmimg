#include<stdio.h>
#include<stdlib.h>
int t[10000][10000];
int max(int a,int b){
    if(a>b)
    return a;
    else return b;
}
int knapsac(int wt[],int val[],int w,int n){
    if(n==0 || w==0){
        return 0;
    }
    if(t[n][w]!=-1)
    return t[n][w];
    if(wt[n-1]<=w)
    return t[n][w]= max(val[n-1]+knapsac(wt,val,w-wt[n-1],n-1),knapsac(wt,val,w,n-1));
    else{
        return t[n][w]= knapsac(wt,val,w,n-1);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int wt[n];
    int val[n];
    for(int i=0;i<n;i++){
        scanf("%d",&wt[i]);
    }
     for(int i=0;i<n;i++){
        scanf("%d",&val[i]);
    }
    int w;
    scanf("%d",&w);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=w;j++){
            t[i][j]=-1;
        }
    }
    int ans= knapsac(wt,val,w,n);
    printf("%d\n",ans);
}