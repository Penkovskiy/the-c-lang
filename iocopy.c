// iocopy.c - Копирует входной поток символов в выходной поток
#include <stdio.h>

int main()
{
    int c; // Переменная с имеет тип int
           // Чтобы иметь возможность Содержать значение
           // EOF
    c = getchar();

    while (c != EOF) { // End Of File
        puthcar(c);
        c = getchar();
    }

    return 0;
}
