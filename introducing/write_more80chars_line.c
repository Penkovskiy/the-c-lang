// write_more80chars_line.c - Печатает все строки, длина которых привышает 
// 80 символов (Но не более MAXLEN символов)
#include <stdio.h>

#define LIMIT 80
#define MAXLEN 1000

int getline(char line[], int maxlen);

int main()
{
    char line[MAXLEN];

    int len;

    while ((len = getline(line, MAXLEN)) > 0) 
        if (len > LIMIT) 
            printf("%s", line);

    return 0;
}


int getline(char line[], int maxlen)
{
    int len;
    int c;

    for(len= 0; (c = getchar()) != EOF && c != '\n'; len++)
        line[len] = c;
    if (c == '\n') {
        line[len] = c;
        len++;
    }
    line[len] = '\0';
    
    return len;
}


