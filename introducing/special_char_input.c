// special_char_input.c - Заменяет сиволы табуляциии, обратной косой черты
// символ забоя как \t, \\, \b соответственно
#include <stdio.h>

int main()
{
    int c;

    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
        }
        else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        }
        else if (c == '\b') {
            putchar('\\');
            putchar('b');
        }
        else
            putchar(c);
    }
    return 0;
}
