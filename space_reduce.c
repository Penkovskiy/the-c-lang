// space_reduce.c - Заменяет подряд идущие пробелы одним
// Excersice 1.9
#include <stdio.h>

int main()
{
    int need_to_print = 0;
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
        while (c == ' ') {
            c = getchar();
            need_to_print = 1;
        }
        if (need_to_print) {
            putchar(c);
            need_to_print = 0;
        }
    }
    
    return 0;
}

