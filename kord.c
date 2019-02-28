#include <stdio.h>
#include <stdlib.h>
int
main (void)
{
    int x = 0, y = 0;
    int mx = 80 * 2, my = 24 * 2;

    int asd = 0;

    while (asd != 50)
    {
        x = (x + 1) % mx;
        y = (y + 1) % my;

        printf ("%d %d\n", x, y);
        asd++;
    }
    return 0;
}