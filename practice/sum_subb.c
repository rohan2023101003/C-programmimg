#include<stdio.h>
int max(int a,int b){
    if(a>b) return a;
    else return b;
}
int t[1000][1000];
int knapsac(int arr[],int val[],int w,int n){
    if(t[n][w]!=-1) return t[n][w];
    if(n==0 || w==0) return 0;
    if(arr[n-1]<=w) return t[n][w]=max(val[n-1]+knapsac(arr,val,w-arr[n-1],n-1),knapsac(arr,val,w,n-1));
    else return t[n][w]=knapsac(arr,val,w,n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int wt[n];
    for(int i=0;i<n;i++){
        scanf("%d",&wt[i]);
    }
    int val[n];
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
   int dp[n+1][w+1];
   for(int i=0;i<=n;i++){
      for(int j=0;j<=w;j++){
        if(i==0 || j==0){
        dp[i][j]=0;
        continue;
       }
       if(wt[i-1]<=j) dp[i][j]= max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
       else dp[i][j]= dp[i-1][j];
   }
   }
   printf("%d\n",dp[n][w]);
}