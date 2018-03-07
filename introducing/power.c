// power.c - Программа реализует ф-цию возведения числа в степень
#include <stdio.h>

int power(int n, int base);

int main()
{
    int i;
    for (i = 0; i < 10; i++)
        printf("%d %d %d\n", i, power(2, i), power(-3, i));
    return 0;
}

// Возводит n в степень base; (base >= 0
int power(int n, int base)
{
    int result;

    for (result = 1; base > 0; base--)
        result *= n;
    return result;
}

