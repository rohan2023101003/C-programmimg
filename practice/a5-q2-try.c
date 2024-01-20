#include<stdio.h>
#include<string.h>
char* reverseString(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
    return str;
}
int main(){
    char str[300001];
    scanf("%s",str);
    int m;
    scanf("%d",&m);
    while(m--){
        int l;
        scanf("%d",&l);
        if(l==1){
           strcpy(str,reverseString(str));
        }
        else{
            int q;
            scanf("%d",&q);
            if(q==1){
                char s[1];
                scanf("%s",s);
                int r=strlen(str);
                for(int i=r;i>=1;i--){
                    str[i]=str[i-1];
                }
                str[0]=s[0];
                str[r+1]='\0';
            }
            else{
                char s[1];
                scanf("%s",s);
                int a= strlen(str);
                str[a]=s[0];
                str[a+1]='\0';
            }
        }
    }
    printf("%s",str);

    return 0;
}