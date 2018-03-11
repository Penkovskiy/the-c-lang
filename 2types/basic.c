#include <stdio.h>

// squeeze: Удаляет все с из s
void squeeze(char s[], int c)
{
    int i;
    int j;

    for (i = j = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

// strcat: помещает строку t в конец s
// Размер не проверяется
void strcat(char s[], char t[])
{
    int i;
    int j;

    i = j = 0;
    while (s[i] != '\0')
        i++;
    while ((s[i++] = t[j++]) != '\0')
        ;
}

int main()
{
    char str[100] = "Hello, ";
    char end[] = "World";

    strcat(str, end);
    printf("%s\n", str);
}


