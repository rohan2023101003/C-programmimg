#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++){
        int n;
        scanf("%d",&n);
        char s[n+1];
        char t[n+1];
        scanf("%s",s);
        scanf("%s",t);
        int as[26]={0};
        int at[26]={0};
        int ss=0;
        int st=0;
        for(int i=0;i<n;i++){
            int a= s[i];
            if(a>=97 && a<=122){
                as[a-97]++;
            }
            else{
                ss++;
            }
            int b= t[i];
            if(b>=97 && b<=122){
                at[b-97]++;
            }
            else{
                st++;
            }
        }
        int flag=0;
        for(int i=7;i<26;i++){
            if(as[i]!=at[i]){
                printf("No\n");
                flag=1;
                break;
            }
        }
        if(flag==1){
            continue;
        }
        for(int i=0;i<7;i++){
            if(as[i]!=at[i]){
                if(as[i]>at[i]){
                    st=st-(as[i]-at[i]);
                }
                else{
                    ss=ss-(at[i]-as[i]);
                }
            }
        }
        if(st>=0 && ss>=0){
            printf("Yes\n");
        }
        else{
            printf("No\n");
        }
    }
    return 0;
}