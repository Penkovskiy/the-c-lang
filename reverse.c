// reverse.c - Разворачивает вводимую строку
#include <stdio.h>

void reverse(char line[]);

int main()
{
    char hello[] = "Hello, world\0";

    reverse(hello);
    printf("%s\n", hello);
}

void reverse(char line[])
{
    int i, j;
    char tmp;

    i = j = 0;

    // Нходим конец строки
    while (line[j] != '\0')
        j++;

    j--;
    while (i != j) {
        tmp = line[i];
        line[i] = line[j];
        line[j] = tmp;
        i++;
        j--;
    }
}
