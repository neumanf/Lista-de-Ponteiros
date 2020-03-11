#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**************************************************************************
 * OUTPUT                                                                 *
 *                                                                        *
 * Digite o número de elementos: 50                                       *
 * Digite os elementos: 48 -98 -32 50 -62 78 41 -17 37 -40 22 -64 -57 -75 *
 * -29 -71 -69 66 -74 -88 -66 71 -23 -3 -51 91 -22 99 -60 23 -38 46 43    *
 * -78 61 74 12 54 27 -11 63 96 59 -85 -95 95 -28 -97 94 62               *
 * my_sort: 0.000059 segundos                                             *
 * qsort: 0.000013 segundos                                               *
 **************************************************************************/

// Troca dois elementos de posição
float swap(float* a, float* b)
{
    float temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

// Compara dois elementos
int compare(const void* a, const void* b)
{
    return (*(float*)a - *(float*)b);
}

// Ordena elementos em ordem crescente
void my_sort(float* ptr, int n, int (*compare)(const void*, const void*))
{
    for (int i = 0; i < n; ++i)
        for (int j = i + 1; j < n; ++j)
            if (((*compare)(ptr + i, ptr + j)) > 0)
                swap(ptr + i, ptr + j);
}

int main()
{
    int n;
    float* ptr;
    clock_t t;

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

    // Realiza o benchmark entre my_sort() e qsort() utilizando clock()
    t = clock(); // Inicializa `t` com o tempo atual
    my_sort(ptr, n, compare);
    t = clock() - t; // Atualiza `t` com a duração do algoritmo
    printf("my_sort: %f segundos\n", ((float)t) / CLOCKS_PER_SEC);
    t = clock();
    qsort(ptr, n, sizeof(float), compare);
    t = clock() - t;
    printf("qsort: %f segundos\n", ((float)t) / CLOCKS_PER_SEC);

    free(ptr);

    return 0;
}