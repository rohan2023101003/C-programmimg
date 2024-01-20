#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char* a, char* b) { 
    char temp = *a; 
    *a = *b; 
    *b = temp; 
} 
int partition(char* str, int low, int high) {
    char pivot = str[high]; 
    int i = low - 1; 
    for (int j = low; j <= high - 1; j++) { 
        if (str[j] <= pivot) { 
            i++; 
            swap(&str[i], &str[j]);  
        } 
    } 
    swap(&str[i + 1], 
         &str[high]);  
    return i + 1;  
} 
void quickSort(char* str, int low, int high){ 
    if (low < high) { 
        int pivotIndex = partition( 
            str, low, high); 
        quickSort(str, low, 
                  pivotIndex 
                      - 1); 
        quickSort(str, pivotIndex + 1, 
                  high);
    } 
} 
void permute(char *a, int l, int r){ 
    int i; 
    if (l == r) 
        printf("%s\n", a); 
    else{
        for (i = l; i <= r; i++) {
            swap((a + l), (a + i)); 
           quickSort(a,l+1,r);
            permute(a, l + 1, r);
            swap((a + l), (a + i)); 
        } 
    } 
} 
int main(){
    char str[9];
    scanf("%s",str);
    int l=0;
    int r=strlen(str);
    quickSort(str,l,r-1);
    permute(str,l,r-1);
    return 0;

}