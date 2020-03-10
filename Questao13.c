#include <stdio.h>

void hello(char *name, int age)
{
    printf("Hello world, %s! You are %d years old.\n", name, age);
}

int main()
{
    char name[6] = "Maria";
    int age = 22;

    // Cria o ponteiro para a função na seguinte forma
    // `tipo_de_saida (ponteiro)(parametro1, parametro2...) = endereço da função`
    void (*p_hello)(char *, int) = &hello;

    // Invoca a função na forma `(ponteiro)(argumento1, argumento2...)`
    (*p_hello)(name, age);

    return 0;
}