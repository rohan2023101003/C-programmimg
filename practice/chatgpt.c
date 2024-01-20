#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int num_rows;
    int num_cols;
    long long int** data;
} Matrix;

Matrix* create_matrix(int r, int c) {
    Matrix* m = (Matrix*)malloc(sizeof(Matrix));
    m->num_rows = r;
    m->num_cols = c;
    m->data = (long long int**)calloc(r, sizeof(long long int*));
    for (int i = 0; i < r; i++) {
        m->data[i] = (long long int*)calloc(c, sizeof(long long int));
        for (int j = 0; j < c; j++) {
            scanf("%lld", &(m->data[i][j]));
        }
    }
    return m;
}

void free_matrix(Matrix* m) {
    if (m) {
        for (int i = 0; i < m->num_rows; i++) {
            free(m->data[i]); // Free each row of data
        }
        free(m->data); // Free the data array of pointers to rows
        free(m);       // Free the Matrix structure itself
        m = NULL;       // Set the pointer to NULL
    }
}

int main() {
    Matrix* myMatrix = create_matrix(3, 3); // Create a 3x3 matrix

    // Use the matrix...

    free_matrix(myMatrix); // Free the memory and set the pointer to NULL

    // Now, attempting to access myMatrix will result in a NULL pointer
    if (myMatrix == NULL) {
        printf("The matrix has been freed and the pointer is NULL.\n");
    } else {
        printf("The matrix pointer is not NULL. Avoid accessing it.\n");
    }

    return 0;
}
