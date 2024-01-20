#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void swap(char* a, char* b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}
  
// function to partition the string and return the pivot
// index
int partition(char* str, int low, int high)
{
    char pivot = str[high]; // choose the last character as
                            // the pivot
    int i = low - 1; // index of the smaller element
  
    // loop through the sub-array to partition it around the
    // pivot
    for (int j = low; j <= high - 1; j++) {
        // if the current character is smaller than or equal
        // to the pivot
        if (str[j] <= pivot) {
            i++; // increment the index of the smaller
                 // element
            swap(&str[i], &str[j]); // swap the current
                                    // character with str[i]
        }
    }
    swap(&str[i + 1],
         &str[high]); // swap the pivot with str[i + 1]
    return i + 1; // return the pivot index
}
  
// function to sort the string using the Quick Sort
// algorithm
void quickSort(char* str, int low, int high)
{
    if (low < high) {
        int pivotIndex = partition(
            str, low, high); // partition the string and get
                             // the pivot index
        quickSort(str, low,
                  pivotIndex
                      - 1); // sort the left sub-array
        quickSort(str, pivotIndex + 1,
                  high); // sort the right sub-array
    }
}
int compare_char (const void *a, const void *b) {
    if (*(char *)a != *(char *)b)
        return *(char *)a - *(char *)b;

    return 0;
}
int main(){
    char str[9];
    scanf("%s",str);
    int  n=strlen(str);
    quickSort(str,0,n-1);
    printf("%s\n",str);
    return 0;
}