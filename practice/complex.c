#include"complex.h"
#include<stdio.h>
complex create_complex(float a,float b){
    complex c;
    c.freal=a;
    c.fimg=b;
    return c;
}
void complex_print(complex c){
    printf("%.2f+i%.2f\n",c.freal,c.fimg);
}
complex add_complex(complex a,complex b){
    complex c;
    c.freal=a.freal+ b.freal;
    c.fimg=a.fimg+b.fimg;
    return c;
}