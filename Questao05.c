#include <stdio.h>

/*****************************************************************************************************
 * RESPOSTAS                                                                                         *
 *                                                                                                   *
 * (a) 20, pois alterando o ponteiro *p1, altera-se o conteúdo da variável valor                     *
 * (b) 29.0, devido ao mesmo motivo de (a)                                                           *
 * (c) P, pois *p3 aponta para o primeiro caractere de *nome                                         *
 * (d) e, pois *p3 aponta para o quinto caractere de *nome                                           *
 * (e) P, pois a notação p3 = nome é equivalente a p3 = &nome[0]                                     *
 * (f) e, sendo que p3 aponta para o primeiro caractere de nome, p3 + 4 retornará o quinto caractere *
 * (g) t, p3 aponta para o quinto caractere, então p3 = p3 - 1 apontará para o quarto caractere      *
 * (h) 31, p4 = valor aponta para o primeiro valor de vetor                                          *
 * (i) 45, p5 = p4(primeiro valor) + 1 aponta para o segundo valor de vetor                          *
 * (j) 27, p4 = p5(segundo valor) + 1 aponta para o terceiro valor                                   *
 * (l) 31, p4 = p4(terceiro valor) - 2 aponta para o primeiro valor                                  *
 * (m) 45, p5 = &vetor[2](terceiro valor) - 1 aponta para o segundo valor                            *
 * (n) 27, p5++ = p5(segundo valor) + 1 aponta para o terceiro valor                                 *
 *****************************************************************************************************/

int main() {
  int    valor;
  int   *p1;
  float  temp;
  float *p2;
  char   aux;
  char  *nome = "Ponteiros";
  char  *p3;
  int    idade;
  int    vetor[3];
  int   *p4;
  int   *p5;

  /* (a) */
  valor = 10;
  p1 = &valor;
  *p1 = 20;
  printf("%d \n", valor);

  /* (b) */
  temp = 26.5;
  p2 = &temp;
  *p2 = 29.0;
  printf("%.1f \n", temp);

  /* (c) */
  p3 = &nome[0];
  aux = *p3;
  printf("%c \n", aux);

  /* (d) */
  p3 = &nome[4];
  aux = *p3;
  printf("%c \n", aux);

  /* (e) */
  p3 = nome;
  printf("%c \n", *p3);

  /* (f) */
  p3 = p3 + 4;
  printf("%c \n", *p3);

  /* (g) */
  p3--;
  printf("%c \n", *p3);

  /* (h) */
  vetor[0] = 31;
  vetor[1] = 45;
  vetor[2] = 27;
  p4 = vetor;
  idade = *p4;
  printf("%d \n", idade);

  /* (i) */
  p5 = p4 + 1;
  idade = *p5;
  printf("%d \n", idade);

  /* (j) */
  p4 = p5 + 1;
  idade = *p4;
  printf("%d \n", idade);

  /* (l) */
  p4 = p4 - 2;
  idade = *p4;
  printf("%d \n", idade);

  /* (m) */
  p5 = &vetor[2] - 1;
  printf("%d \n", *p5);

  /* (n) */
  p5++;
  printf("%d \n", *p5);
  return(0);
}
