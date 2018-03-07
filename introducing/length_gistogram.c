// length_gictogram.c - Вывводит вертикальную гистограмму длины слов
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

