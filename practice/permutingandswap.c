#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int sort (const void *a, const void * b){
    return ( *(char *)a - *(char *)b );
}
void swap(char *m, char *n)
{
   int a= *m;
   int b= *n;
   a = a^b;
   b = a^b;
   a = a^b;
   char c,d;
   *m= a;
   *n =b;
}
void permute(char *a, int l, int r) 
{ 
    int i; 
    if (l == r) 
        printf("%s\n", a); 
    else
    { 
        for (i = l; i <= r; i++) 
        { 
            swap((a + l), (a + i)); 
            permute(a, l + 1, r); 
           swap((a + l), (a + i)); 
        } 
    } 
} 
void main()
{
   char a[] = "abcdefgh";
   int n=strlen(a);
   permute(a, 0, n-1);
}