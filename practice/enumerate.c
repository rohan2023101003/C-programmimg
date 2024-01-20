#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            for(int k=i;k<=j;k++){
                printf("%d ",k);
            }
            printf("\n");
        }
    }
}
/*
int mincost(int arr[],int jump,start,end){
    if(ans[start!=-1]) return ans[start];
    if(start==end) return 0;
    int mini=100000000;
    for(int i=i;i<=jump;i++){
        if(start+i<=end){
            int costtoi= abs(arr[start]-arr[start+i]);
            int costfromitoend=mincost(arr,jump,start+i,end);
            mini= min(costtoi+costfromitoend,mini);
        }
    }
    return ans[start]=mini;
}
*/