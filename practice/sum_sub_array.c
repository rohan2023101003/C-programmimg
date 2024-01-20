#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int s;
    scanf("%d",&s);
    int tr[n+1][s+1];
    // int sum[n*(n+1)/2];
    // for(int i=0;i<n*(n+1)/2;i++){
    //    sum[i]=0;
    // }
    // int c=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         for(int k=i;k<=j;k++){
    //         sum[c]+=arr[k];
    //         }
    //         c++;
    //     }
    // }
    // for(int i=0;i<c;i++){
    //     printf("%d ",sum[i]);
    // }/
    for(int i=0;i<=n;i++){
        tr[i][0]=1;
    }
    for(int j=1;j<=s;j++){
        tr[0][j]=0;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=s;j++){
            if(arr[i-1]<=j) tr[i][j]=tr[i-1][j-arr[i-1]]+tr[i-1][j];
            else tr[i][j] = tr[i-1][j];
        }
    }
    printf("%d ",tr[n][s]);
    return 0;
}

