#include <stdio.h>
#include <stdlib.h>

/*****************************************
 * OUTPUT                                *
 *                                       *
 * Digite o número de elementos: 4       *
 * Digite os elementos de vec1: 1 3 0 -2 *
 * Digite os elementos de vec2: 3 5 -3 1 *
 * 4 8 -3 -1                             *
 *****************************************/

void sum_vectors(int* vec1, int* vec2, int* vec3, int n)
{
    for (int i = 0; i < n; ++i)
        *(vec3 + i) = *(vec1 + i) + *(vec2 + i);
}

int main()
{
    int n;
    int *vec1, *vec2, *vec3;

    printf("Digite o número de elementos: ");
    scanf("%d", &n);

    // Aloca os ponteiros dinamicamente
    vec1 = (int*)malloc(n * sizeof(int));
    vec2 = (int*)malloc(n * sizeof(int));
    vec3 = (int*)malloc(n * sizeof(int));

    // Verifica se a memoria foi alocada
    if (vec1 == NULL || vec2 == NULL || vec3 == NULL)
        exit(0);

    printf("Digite os elementos de vec1: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", &*(vec1 + i));

    printf("Digite os elementos de vec2: ");
    for (int i = 0; i < n; ++i)
        scanf("%d", &*(vec2 + i));

    sum_vectors(vec1, vec2, vec3, n);

    for (int i = 0; i < n; i++)
        printf("%d ", *(vec3 + i));

    printf("\n");

    free(vec1);
    free(vec2);
    free(vec3);

    return 0;
}