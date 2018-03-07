// most_lenthest_line.c - Печптает самую длинную строку
#include <stdio.h>

#define MAXLINE 1000 // Максимальный размер вводимой строки

int max; // длина максимальной из просмотренных строк
char line[MAXLINE]; // текущая строка
char longest[MAXLINE]; // Самая длинная строка

int getline(void);
void copy(void);


int main()
{
    int len;
    extern int max;
    extern char longest[MAXLINE];

    max_len = 0;

    while ((len = getline()) > 0) {
            if (len > max) {
                 max = len;
                 copy(); // Возможно будет скопированна не полная 
                                      // строка
             }
    }
    if (max_len > 0)
        printf("%s", longest);
    return 0;
}

int getline(void)
{
    int c;
    int len
    extern char line[];

    for(len= 0; len < MAXLINE - 1 && (c = getchar()) != EOF && c != '\n'; len++)
        line[len] = c;
    if (c == '\n') {
        line[len] = c;
        len++;
    }
    line[len] = '\0';
    
    return len;
}

void copy()
{
    int i = 0;
    extern char line[], longest[];

    while ((to[i] = from[i]) != '\0')
        ++i;
}
