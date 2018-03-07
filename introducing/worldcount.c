// worldcount.c - упрощенная версия wc 
// Пдсчиывает строки, слова и символы
#include <stdio.h>

#define IN 1 // Внутри слова
#define OUT 0 // Снаружи слова

int main()
{
    int newlines;
    int newworlds;
    int newcharecters;

    int state;

    int c;
    newlines = newworlds = newcharecters = 0;

    state = OUT;
    while ((c = getchar()) != EOF) {
        newcharecters++;
        if (c == '\n')
            newlines++;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
           state = IN;
           ++newworlds;
        }
    }
    printf("%d %d %d\n", newlines, newworlds, newcharecters);

    return 0;
}



