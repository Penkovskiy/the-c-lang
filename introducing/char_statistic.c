// char_statistic.c - Показывает статистику по кол-ву набранных символов
#include <stdio.h>

int main()
{
    int nwhite;
    int nother;
    int ndigit[10];

    int c, i;

    nwhite = nother = 0;
    for( i = 0; i < 10; ++i)
        ndigit[i] = 0;
    while ((c = getchar()) != EOF)
        if (c >= '0' && c <= '9')
            ++ndigit[c - '0'];
        else if (c == ' ' || c == '\t' || c == '\n')
            nwhite++;
        else
            nother++;
    printf("Цифры: ");
    for (i = 0; i < 10; i++)
        printf("%d ", ndigit[i]);
    printf(", пробельные символы: %d, прочие: %d\n", nwhite, nother);

    return 0;
}

