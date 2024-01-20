//  #ifndef COMPLEX_H
//  #define COMPLEX_H
#include<stdlib.h>
#include<stdio.h>
typedef struct complex{
    float freal;
    float fimg;
}complex;lab1.c
complex create_complex(float ,float );
void complex_print(complex );
complex add_complex(complex ,complex );
 //#endif