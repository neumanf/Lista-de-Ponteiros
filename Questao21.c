#include <gc.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/******************************************************
 * CHAMADA/OUTPUT                                     *
 *                                                    *
 * $ gcc Questao21.c -o Questao21 -lgc && ./Questao21 *
 * libgc: 0.000532 segundos                           *
 * malloc: 0.000003 segundos                          *
 ******************************************************/

int main()
{
    clock_t t;

    t = clock();

    int** p = (int**)GC_MALLOC_ATOMIC(sizeof(int*));
    int* q = (int*)GC_MALLOC_ATOMIC(sizeof(int));
    *p = (int*)GC_REALLOC(q, 2 * sizeof(int));
    GC_FREE(p);
    GC_FREE(q);

    t = clock() - t;
    printf("libgc: %f segundos\n", ((float)t) / CLOCKS_PER_SEC);

    t = clock();

    int** r = (int**)malloc(sizeof(int*));
    int* s = (int*)malloc(sizeof(int));
    *r = (int*)realloc(s, 2 * sizeof(int));
    free(r);
    free(s);

    t = clock() - t;
    printf("malloc: %f segundos\n", ((float)t) / CLOCKS_PER_SEC);

    return 0;
}