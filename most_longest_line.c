// most_lenthest_line.c - Печптает самую длинную строку
#include <stdio.h>

#define MAXLINE 1000 // Максимальный размер вводимой строки

int getline(char linef[], int maxline);
void copy(char to[], char from[]);


int main()
{
    int len;
    int max_len;
    char line[MAXLINE];
    char longest[MAXLINE];

    max_len = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max_len) {
            max_len = len;
            copy(longest, line);
        }
    if (max_len > 0)
        printf("%s", longest);
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

void copy(char to[], char from[])
{
    int i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
