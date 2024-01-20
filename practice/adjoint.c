#include <stdio.h>
// Function to calculate the determinant of a submatrix
int determinant(int mat[10][10], int n) {
    if (n == 1) {
        return mat[0][0];
    } else if (n == 2) {
        return mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    } else {
        int det = 0;
        int submatrix[10][10];
        int sign = 1;
        
        for (int c = 0; c < n; c++) {
            int subi = 0;
            for (int i = 1; i < n; i++) {
                 int subj = 0;
                for (int j = 0; j < n; j++) {
                    if (j != c) {
                        submatrix[subi][subj] = mat[i][j];
                        subj++;
                    }
                }
                subi++;
            }
            det += sign * mat[0][c] * determinant(submatrix, n - 1);
            sign = -sign;
        }
        return det;
    }
}
int main() {
    int n;
    scanf("%d", &n);

    int matrix[10][10];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
   int det= determinant(matrix,n);
   printf("%d\n",det);
    return 0;
}
