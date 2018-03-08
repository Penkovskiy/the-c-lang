// std_sizes.c
// 
// Выводит диапазон значений стандартных типов данных
// Используя именнованные константы а также вычисляя самостоятельно
//
#include <stdio.h>
#include <limits.h>
#include <float.h>

int max_int_size()
{
    int i;

    for (i = 1; i < i * 2 ; i *= 2 ) 
        ;

    return i * 2 - 1; // 1 bit на знак
}


int min_int_size()
{
    int i;

    for (i = -1; i > i * 2 ; i *= 2 ) 
        ;

    return i; // На знак бит уже не требуется 
}

double max_double_size()
{
    double i;
    for (i = 1; i > i / 2; i *= 2)
        ;
    return i;
}

int main()
{
    printf("%d\n", max_int_size());
    printf("%d\n", INT_MAX);

    printf("%d\n", INT_MIN);
    printf("%d\n", min_int_size());


    printf("%e\n", max_double_size());
    printf("%e\n", DBL_MAX);


    return 0;
}





