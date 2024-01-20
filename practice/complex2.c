#include "complex2.h"
complex subtract(complex a,complex b){
    complex c;
    c.freal=a.freal-b.freal;
    c.fimg=a.fimg-b.fimg;
    return c;
}