#include<stdio.h>
#include<string.h>

int main(){
    char str[8];
    scanf("%s",str);
    int n=strlen(str);
    for(int i=0;i<n;i++){
        int c=1,r=0;
        for(int k=i-1;k>=0;k--){
            if(str[i]!=str[k]){
                r++;
            }
        }
        if(r==i){
            for(int j=i+1;j<n;j++){
                if(str[i]==str[j]){
                    c++;
                }
            }
        }
        printf("%d\n",c);
    }
    return 0;
}