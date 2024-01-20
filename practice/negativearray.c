#include<stdio.h>
int main(){
    int a[]={5,-8,98,5,-89,-9};
    int n=sizeof(a)/sizeof(a[0]);
    /*int m=1;
    for(int i=0;i<n;i++){
        if(a[i]<0){
            int temp=a[m-1];
            a[m-1]=a[i];
            a[i]=temp;
            m++;

        }
    }
    for(int j=0;j<n;j++){
        printf("%d,",a[j]);
    }*/
    int l=0,r;
    r=n-1;
    while(r>l){
        if(a[l]>0 && a[r]<0){
            int swap=a[r];
            a[r]=a[l];
            a[l]=swap;
            r--;
            l++;
        }
        if(a[l]<0 && a[r]>0){
            r--;
            l++;
        }
        if(a[l]>0 && a[r]>0){
            r--;
        }
        if(a[l]<0 && a[r]<0){
            l++;
        }

    }
    for(int i=0;i<n;i++){
        printf("%d,",a[i]);
    }
    return 0;
}
