#include <stdio.h>

/*copy input to output, sample program from 1.5.1 of K&R c*/

void main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
