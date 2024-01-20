#include<stdio.h>
int main(){
    int arr[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int(*ptr)[3][4];
    ptr = &arr;
    printf("%d\n",&arr[2][0]);
    printf("%d\n",ptr);
    printf("%d\n",&arr[0][0]);
    printf("%d\n",&arr[2][1]);
    printf("%d\n",*(*(*ptr+2)+1));
    return 0;
}