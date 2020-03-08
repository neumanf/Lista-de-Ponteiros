#include <stdio.h>

/***************************************************************************
 * RESPOSTA                                                                *
 *                                                                         *
 * contador/valor/valor/endereco/endereco                                  *
 * i = 0vet[0] = 1.1*(f + 0) = 1.1&vet[0] = C6BA3220(f + 0) = C6BA3220     *
 * i = 1vet[1] = 2.2*(f + 1) = 2.2&vet[1] = C6BA3224(f + 1) = C6BA3224     *
 * i = 2vet[2] = 3.3*(f + 2) = 3.3&vet[2] = C6BA3228(f + 2) = C6BA3228     *
 * i = 3vet[3] = 4.4*(f + 3) = 4.4&vet[3] = C6BA322C(f + 3) = C6BA322C     *
 * i = 4vet[4] = 5.5*(f + 4) = 5.5&vet[4] = C6BA3230(f + 4) = C6BA3230     *
 *                                                                         *
 * - *(f+i) equivale a vet[i], pois f aponta para o primeiro valor de vet, *
 *   portanto quando denotado em forma de ponteiro, acrescido do valor     *
 *   i(deslocamento desde a posição 0), ambos apresentam a mesma           *
 *   funcionalidade.                                                       *
 * - f+i equivale a &vet[i], visto que *(f+i) é o ponteiro que aponta      *
 *   para os elementos de vet, f+i aponta para seus respectivos endereços. *
 ***************************************************************************/

int main(void){
  float vet[5] = {1.1,2.2,3.3,4.4,5.5};
  float *f;
  int i;

  f = vet;

  printf("contador/valor/valor/endereco/endereco");

  for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);
    printf("vet[%d] = %.1f",i, vet[i]);
    printf("*(f + %d) = %.1f",i, *(f+i));
    printf("&vet[%d] = %X",i, &vet[i]);
    printf("(f + %d) = %X",i, f+i);
  }

  return 0;
}

