#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*************
 * OUTPUT    *
 *           *
 * 38 48 8   *
 * 47 66 23  *
 * 85 106 17 *
 *************/

int** multiply_matrices(int** A, int** B, int** C, int nlA, int ncA, int ncB)
{
    for (int i = 0; i < nlA; ++i)
        for (int j = 0; j < ncB; ++j)
            for (int k = 0; k < ncA; ++k)
                C[i][j] += A[i][k] * B[k][j];
}

void print_matrix(int** A, int nl, int nc)
{
    for (int i = 0; i < nl; ++i) {
        for (int j = 0; j < nc; ++j)
            printf("%d ", A[i][j]);
        printf("\n");
    }
}

int main()
{
    int **A, **B, **C;
    int nlA = 3, ncA = 4;
    int nlB = 4, ncB = 3;
    int nlC = ncB, ncC = nlA;

    // Aloca os ponteiros dinamicamente
    A = (int**)malloc(nlA * sizeof(int*));
    for (int i = 0; i < nlA; ++i)
        A[i] = (int*)malloc(nlA * ncA * sizeof(int));

    B = (int**)malloc(nlB * sizeof(int*));
    for (int i = 0; i < nlB; ++i)
        B[i] = (int*)malloc(nlB * ncB * sizeof(int));

    C = (int**)malloc(nlC * sizeof(int*));
    for (int i = 0; i < nlC; ++i)
        C[i] = (int*)malloc(nlC * ncC * sizeof(int));

    // Verifica se a memoria foi alocada
    if (A == NULL || B == NULL || C == NULL)
        exit(0);

    // Atribui valor a cada elemento de A e B
    A[0][0] = 3;
    A[0][1] = 4;
    A[0][2] = 1;
    A[0][3] = 2;

    A[1][0] = 5;
    A[1][1] = 6;
    A[1][2] = -1;
    A[1][3] = 9;

    A[2][0] = 7;
    A[2][1] = 8;
    A[2][2] = 3;
    A[2][3] = 3;

    B[0][0] = 3;
    B[0][1] = 4;
    B[0][2] = 1;

    B[1][0] = 5;
    B[1][1] = 6;
    B[1][2] = -1;

    B[2][0] = 7;
    B[2][1] = 8;
    B[2][2] = 3;

    B[3][0] = 1;
    B[3][1] = 2;
    B[3][2] = 3;

    multiply_matrices(A, B, C, nlA, ncA, ncB);

    print_matrix(C, nlC, ncC);

    for (int i = 0; i < nlA; ++i)
        free(A[i]);
    free(A);
    for (int i = 0; i < nlB; ++i)
        free(B[i]);
    free(B);
    for (int i = 0; i < nlC; ++i)
        free(C[i]);
    free(C);

    return 0;
}