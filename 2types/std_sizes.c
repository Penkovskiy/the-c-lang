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



int main()
{
    printf("%d\n", max_int_size());
    printf("%d\n", INT_MAX);

   return 0;
}





