// length_gictogram.c - $B'#'m'S'S'`'U'Z'd(B $B'S'V'b'd'Z'\'Q']'n'_'e'p(B $B'T'Z'c'd'`'T'b'Q'^'^'e(B $B'U']'Z'_'m(B $B'c']'`'S(B
#include <stdio.h>

int main()
{
    int world_len;
    int c;

    world_len = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n') {

            while (world_len-- > 0)
                putchar('_');
            putchar('\n');
            world_len = 0;
        }
        else
            world_len++;
    } 

    return 0;
}

