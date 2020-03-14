#include <stdio.h>

/**************************************************************
 * OUTPUT                                                     *
 *                                                            *
 * Valores na maquina:                                        *
 * char: 1 bytes                                              *
 * int: 4 bytes                                               *
 * float: 4 bytes                                             *
 * double: 8 bytes                                            *
 *                                                            *
 *                                                            *
 * x declarado como char                                      *
 * endereço de x[0]: 600786148 = 97+(0*sizeof(char))          *
 * endereço de x[1]: 600786149 = 97+(1*sizeof(char))          *
 * endereço de x[2]: 600786150 = 97+(2*sizeof(char))          *
 * endereço de x[3]: 600786151 = 97+(3*sizeof(char))          *
 *                                                            *
 * x declarado como int                                       *
 * endereço de x[0]: 600786080 = 600786080+(0*sizeof(int))    *
 * endereço de x[1]: 600786084 = 600786080+(1*sizeof(int))    *
 * endereço de x[2]: 600786088 = 600786080+(2*sizeof(int))    *
 * endereço de x[3]: 600786092 = 600786080+(3*sizeof(int))    *
 *                                                            *
 * x declarado como float                                     *
 * endereço de x[0]: 600786096 = 600786096+(0*sizeof(float))  *
 * endereço de x[1]: 600786100 = 600786096+(1*sizeof(float))  *
 * endereço de x[2]: 600786104 = 600786096+(2*sizeof(float))  *
 * endereço de x[3]: 600786108 = 600786096+(3*sizeof(float))  *
 *                                                            *
 * x declarado como double                                    *
 * endereço de x[0]: 600786112 = 600786112+(0*sizeof(double)) *
 * endereço de x[1]: 600786120 = 600786112+(1*sizeof(double)) *
 * endereço de x[2]: 600786128 = 600786112+(2*sizeof(double)) *
 * endereço de x[3]: 600786136 = 600786112+(3*sizeof(double)) *
 **************************************************************/

int main()
{
    char x[4] = { 'a', 'b', 'c', 'd' };
    int y[4] = { 1, 2, 3, 4 };
    float z[4] = { 1.0, 2.0, 3.0, 4.0 };
    double w[4] = { 1.0, 2.0, 3.0, 4.0 };

    printf("Valores na maquina:\n");
    printf("char: %d bytes\n", sizeof(char));
    printf("int: %d bytes\n", sizeof(int));
    printf("float: %d bytes\n", sizeof(float));
    printf("double: %d bytes\n\n", sizeof(double));

    /* Impreme os endereços de cada elemento */
    printf("\nx declarado como char\n");
    for (int i = 0; i < 4; ++i)
        printf("endereço de x[%d]: %d = %d+(%d*sizeof(char))\n", i, &x[i], &x[0], i);
    printf("\nx declarado como int\n");
    for (int i = 0; i < 4; ++i)
        printf("endereço de x[%d]: %d = %d+(%d*sizeof(int))\n", i, &y[i], &y[0], i);
    printf("\nx declarado como float\n");
    for (int i = 0; i < 4; ++i)
        printf("endereço de x[%d]: %d = %d+(%d*sizeof(float))\n", i, &z[i], &z[0], i);
    printf("\nx declarado como double\n");
    for (int i = 0; i < 4; ++i)
        printf("endereço de x[%d]: %d = %d+(%d*sizeof(double))\n", i, &w[i], &w[0], i);

    return 0;
}