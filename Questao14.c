#include <stdio.h>
#include <stdlib.h>

/*************************************
 * OUTPUT                            *
 *                                   *
 * Digite o número de elementos: 5   *
 * Digite os elementos: 0 -8 -2 10 1 *
 * -8.00 -2.00 0.00 1.00 10.00       *
 *************************************/

// Troca dois elementos de posição
float swap(float* a, float* b)
{
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int n;
    float* ptr;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // Aloca o ponteiro dinamicamente
    ptr = (float*)malloc(n * sizeof(float));

    // Verifica se a memoria foi alocada
    if (ptr == NULL)
        exit(0);

    printf("Digite os elementos: ");
    for (int i = 0; i < n; ++i)
        scanf("%f", &*(ptr + i));

    // Ordena em ordem crescente
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (*(ptr + i) > *(ptr + j))
                swap(&*(ptr + i), &*(ptr + j));

    // Printa todos os elementos do ponteiro
    for (int i = 0; i < n; i++)
        printf("%.2f ", *(ptr + i));

    printf("\n");

    free(ptr);

    return 0;
}