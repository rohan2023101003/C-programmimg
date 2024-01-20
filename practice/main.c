#include<stdio.h>
#include<string.h>
//#include"complex.h"
#include "complex2.h"
int main(){
    char str[50];
    scanf("%s",str);
    while(strcmp(str,"-1")!=0){
        if(strcmp(str,"add")==0){
            float a1,b1,a2,b2;
            printf("enter first complex number real part:");
            scanf("%f",&a1);
            printf("enter first complex number imgainary part:");
            scanf("%f",&b1);
            printf("the complex number is: %.2f + i(%.2f)\n",a1,b1);
            printf("enter second complex number real part:");
            scanf("%f",&a2);
            printf("enter second complex number imgainary part:");
            scanf("%f",&b2);
            printf("the complex number is: %.2f + i(%.2f)\n",a2,b2);
            complex a,b,res;
            a=create_complex(a1,b1);
            b=create_complex(a2,b2);
            res=add_complex(a,b);
            printf("the additon is:");
            complex_print(res);
        }
        if(strcmp(str,"sub")==0){
            float a1,b1,a2,b2;
            printf("enter first complex number real part:");
            scanf("%f",&a1);
            printf("enter first complex number imgainary part:");
            scanf("%f",&b1);
            printf("the complex number is: %.2f + i(%.2f)\n",a1,b1);
            printf("enter second complex number real part:");
            scanf("%f",&a2);
            printf("enter second complex number imgainary part:");
            scanf("%f",&b2);
            printf("the complex number is: %.2f + i(%.2f)\n",a2,b2);
            complex a,b,res;
            a=create_complex(a1,b1);
            b=create_complex(a2,b2);
            res=subtract(a,b);
            printf("the subtraction is:");
            complex_print(res);
        }
        char s[50];
        scanf("%s",s);
        strcpy(str,s);
    }
}