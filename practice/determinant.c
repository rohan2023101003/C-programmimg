#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct Matrix {
    int        num_rows;
    int        num_cols;
    long long int**   data;
} Matrix;
Matrix* create_matrix(int r, int c) {
    Matrix* m = (Matrix*) malloc(sizeof(Matrix));
    m->num_rows =r;
    m->num_cols = c;
    m->data = (long long int**) calloc(r, sizeof(long long int*));
    for (int i =0; i < r; i++) {
        m->data[i] = (long long int*) calloc(c, sizeof(long long int));
        for(int j=0;j<c;j++){
        scanf("%lld",&(m->data[i][j]));
        }
    }
    return m;
}
void print_matrix(Matrix* m) {
    if(m==NULL)  printf("ERROR: INVALID ARGUMENT\n");
    else{
    printf("%d %d\n", m->num_rows, m->num_cols);
    for (int i = 0; i < m->num_rows; i++) {
        for (int j = 0; j < m->num_cols; j++) {
            printf("%lld ", m->data[i][j]);
        }
        printf("\n");
    }
    }
}
int determinant(Matrix* M){
    int m= M->num_rows;
   if(m<3){
     if(m==1) return M->data[0][0];
     if(m==2) return M->data[0][0]*M->data[1][1]-M->data[0][1]*M->data[1][0];
   }
  else{
    int ans=0;
    int sign =1;
    int a=0;int b=0;
        for (int i = 0; i < m; i++) {
            int basic= M->data[0][i];
            Matrix* q = (Matrix*) malloc(sizeof(Matrix));
            q->num_rows = m - 1;
            q->num_cols = m - 1;
            q->data = (long long int**) calloc(m - 1, sizeof(long long int*));
            for (int j = 0; j < m; j++) {
                if(j==0) continue;
                q->data[a] = (long long int*) calloc(m - 1, sizeof(long long int));
                for (int k = 0; k < m; k++) {
                    if (k==i) continue; 
                    q->data[a][b] = M->data[j][k];
                    b++;
                }
                a++;
                b=0;
            }
            a=0;
            b=0;
            ans = ans + sign *basic* determinant(q);
            sign = -sign;
            for (int j = 0; j < m - 1; j++) {
                free(q->data[j]);
            }
            free(q->data);
            free(q);
    }
    return ans;
   }
}
int main(){
    int n;
    scanf("%d",&n);
    Matrix* M1= create_matrix(n,n);
    print_matrix(M1);
    int l= determinant(M1);
    printf("%d\n",l);
}