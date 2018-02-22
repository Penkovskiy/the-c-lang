// iocopy.c - Копирует входной поток символов в выходной поток
#include <stdio.h>

int main()
{
    int c; // Переменная с имеет тип int
           // Чтобы иметь возможность Содержать значение
           // EOF
    

    while ((c = getchar()) != EOF)  // End Of File
        puthcar(c);
    
    return 0;
}
