// iocopy.c - Копирует входной поток символов в выходной поток
#include <stdio.h>

#define MAX_COUNT 10

int main()
{
    int c; // Переменная с имеет тип int
           // Чтобы иметь возможность Содержать значение
           // EOF
    
    int count;
    int condition;

    while ((c = getchar()) != EOF)  // End Of File
        putchar(c);
    
    // Упражнение 1.6
    // Убедитесь что выражение getchar() != EOF получает значение
    // 0 или 1
    for (count = 0; count < MAX_COUNT; count++) {
        condition = getchar() != EOF;
        if ((condition != 1) || (condition != 0))
            printf("Ok\n");
        else
            printf("Failed!: %d\n", condition);
    }
        
    
    // Упражнение 1.7
    // Напечатайте значение EOF
    printf("EOF = %d\n", EOF);

    return 0;
}
