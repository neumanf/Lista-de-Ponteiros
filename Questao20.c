#include <gc.h>
#include <stdio.h>

int main()
{
    // GC_MALLOC aloca a memória e a limpa(preenche o espaço com zeros)
    // Equivalente a calloc()
    int** p = (int**)GC_MALLOC(sizeof(int*));

    // GC_MALLOC_ATOMIC aloca a memória, porém não a limpa
    // Equivalente a malloc()
    int* q = (int*)GC_MALLOC_ATOMIC(sizeof(int));

    // GC_REALLOC equivale a realloc()
    *p = (int*)GC_REALLOC(q, 2 * sizeof(int));

    // GC_FREE equivalente a free()
    GC_FREE(p);
    GC_FREE(q);

    return 0;
}