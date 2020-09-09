#include <stdio.h>

/****************
 * RESPOSTA      *
 *               *
 * 4094 7 5 15 9 *
 ****************/

int main()
{
    int i = 5, *p;
    p = &i;
    printf("%d %d %d %d %d", p, *p + 2, **&p, 3 * *p, **&p + 4);

    return 0;
}