// atoi.c - Более общая версия ф-ции переводящей строку в число
#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int atoi(char s[]);

int main()
{
    assert(atoi("   123") == 123);
    assert(atoi("   +123") == 123);
    assert(atoi("   -123") == -123);

    return 0;
}

int atoi(char s[])
{
    int i;
    int n;
    int sign;

    for (i = 0; isspace(s[i]); i++)
        ;
    sign = (s[i] == '-') ? -1 : 1;
    if (s[i] == '+' || s[i] == '-')
        i++;
    for (n = 0; isdigit(s[i]); i++)
        n = 10 * n + (s[i] - '0');
    return sign * n;
}
