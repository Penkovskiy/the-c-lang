#include <stdio.h>

// squeeze: Удаляет все с из s
void squeeze(char s[], int c)
{
    int i;
    int j;

    for (i =  = 0; s[i] != '\0'; i++)
        if (s[i] != c)
            s[j++] = s[i];
    s[j] = '\0';
}

