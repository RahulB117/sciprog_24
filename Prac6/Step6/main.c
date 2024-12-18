#include<stdio.h>

void mathmult(int n, int p, int q, double A[n][p] ,double B[p][q], double C[n][q]);
int main() {
    // Define your variables
    int n = 5;
    int p = 3;
    int q = 4;

    // Define your arrays
    double A[n][p];
    double B[p][q];
    double C[n][q];
    // Loop indices
    int i, j, k;

    //Init A, B and C
    for(i=0; i<n; i++) {
        for(j=0; j<p; j++) {
            A[i][j]=i+j;
        }
    }
    for(i=0; i<p; i++) {
        for(j=0; j<q; j++) {
            B[i][j]=i-j;
        }
    }
    for(i=0;i<n;i++) {
        for(j=0;j<q;j++) {
            C[i][j]=0.0;
        }
    }
    // Perform Matrix multiplication
    mathmult(n, p, q, A, B,C);
    
/*    
    for(i=0;i<n;i++) {
        for(j=0;j<q;j++) {
            for(k=0;k<p;k++) {
                C[i][j] = C[i][j]+A[i][k]*B[k][j];
            }
        }
    }
*/
    // Print out the matrices
    printf("The matrix A is \n\n");
    for(i=0;i<n;i++) {
        for(j=0;j<p;j++) {
            printf("%3.0f", A[i][j]);
        }
        printf("\n");
    }
    printf("The matrix B is \n\n");
    for(i=0;i<p;i++) {
        for(j=0;j<q;j++) {
            printf("%3.0f", B[i][j]);
        }
        printf("\n");
    }
    printf("The matrix C is \n\n");
    for(i=0;i<n;i++) {
        for(j=0;j<q;j++) {
            printf("%3.0f", C[i][j]);
        }
        printf("\n");
    }    
    return 0;
}