#include <stdio.h>

/**********
 * OUTPUT *
 *        *
 *  1: 1  *
 * 2: -2  *
 *  3: 3  *
 *  4: 1  *
 **********/

int main()
{
    int i = 3, j = 5;
    int *p, *q;
    p = &i;
    q = &j;

    printf("1: %d\n2: %d\n3: %d\n4: %d\n",
           p == &i, *p - *q, **&p, 3 - *p / (*q) + 7);

    return 0;
}