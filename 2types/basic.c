#include <stdio.h>
#include <assert.h>

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

// return c index in str or -1
int index(char str[], int c)
{
    int i;
    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == c)
            return i;
    return -1;
}

void squeeze2(char s[], char t[])
{
    int i;
    
    int j;
    j = 0;
    for (i = 0; s[i] != '\0'; i++)
        if (index(t, s[i]) == -1)
            s[j++] = s[i];
    s[j] = '\0';
}

// Если в строках ести одинаковые символы
// возвращает позицию первого соврадения из s
// Иначе -1
int any(char s[], char t[])
{
    int i;
    i = 0;
    while (s[i] != '\0') {
        if (index(t, s[i]) != -1)
            return i;
        i++;
    }
    return -1;
}


int main()
{
    char str[100] = "Hello, ";
    char end[] = "World";

    assert(any("Hello", "World") == 2);
    assert(any("Hello", "qwrty") == -1);
    assert(any("Hello", "") == -1);

    squeeze2(str, end);
    printf("%s\n", str); // He,
}


