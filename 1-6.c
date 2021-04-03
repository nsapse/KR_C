#include <stdio.h>

/*copy input to output, sample program from 1.5.1 of K&R c*/

void main()
{
    int c;
    int d;

    c = getchar();
    while (c != EOF) {
        d = (c == EOF);
        printf("%d\n", d);
        c = getchar();
    }

    printf("%d\n", c == EOF);
}
