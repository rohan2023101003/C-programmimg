#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int compare(const void *a,const void *b){
    return (*(int*)a-*(int*)b);
}
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    char str[n+1];
    int max=0;
    scanf("%s",str);
    int array[k];
    int a=0;
    for(int i=0;i<k;i++){
        array[i]=0;
    }
    while(a<k){
       int arr[26]={0};
        int r=0;
        char store[n+1][k+1];
    for(int i=a;i<=n-k;i=i+k){
        char ss[k+1];
        for(int j=0;j<k;j++){
            ss[j]=str[j+i];
        }
        ss[k]='\0';
        strcpy(store[r],ss);
        r++; 
     }
    for(int l=0;l<r;l++){
        char string[k];
        int flag=0;
        strcpy(string,store[l]);
        for(int i=0;i<k-1;i++){
            if(string[i]!=string[i+1]){
                flag=1;
                break;
            }
        }
        if(flag==0){
            int f= string[0]-97;
            arr[f]++;
        }
    }
    qsort(arr,26,sizeof(int),compare);
    array[a]=arr[25];
    a++;
    if((a+k)==n){
        break;
    }
    }
    qsort(array,k,sizeof(int),compare);
    printf("%d",array[k-1]);
    return 0;
}
