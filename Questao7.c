#include <stdio.h>

/********************************************************************
 * RESPOSTA                                                         *
 *                                                                  *
 * Apenas *(pulo + 2), visto que 'pulo + 2' referencia o endereço   *
 * ao invés do valor. *(pulo + 4) e 'pulo + 4' referenciam o quinto *
 * elemento do vetor.                                               *
 ********************************************************************/

int main()
{
    int pulo[5] = {1,2,3,4,5};

    printf("%d\n", *(pulo + 2)); // 3, Certo
    printf("%d\n", *(pulo + 4)); // 5, Errado
    printf("%d\n", pulo + 4); // -1541914640, Errado
    printf("%d\n", pulo + 2); // -1541914648, Errado

    return 0;
}