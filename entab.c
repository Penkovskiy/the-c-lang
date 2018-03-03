// entab.c - Заменяет строку пробелов минимальной комбинацией 
// табов и пробелов 
#include <stdio.h>

#define TABSIZE 8
#define MAXLINE 1000

int getline(char s[], int max);
void expand_tabs(char from[], char to[], int len);

int main()
{

    char line[MAXLINE];
    char new_line[MAXLINE];
    int len;

    while ((len = getline(line, MAXLINE)) > 0) {
        expand_tabs(line, new_line, len);
        printf("%s", new_line);
    }

    return 0;
}

int is_tab_fit(char str[], int idx);

void expand_tabs(char from[], char to[], int len)
{
    int i, j;
    char c;

    for (j = i = 0; (c = from[i]) != '\n' ; i++, j++) {
        if (c == ' ' && is_tab_fit(from, i)) {
            to[j] = '\t';
            i += TABSIZE - 2;
            continue;
        }
        to[j] = c;
    }

    
    if (c == '\n')
        to[j++] = c;
    to[j] = '\0';
}

int is_tab_fit(char str[], int idx)
{
    int i;

    for (i = idx + TABSIZE; idx < i; idx++)
        if (str[idx] != ' ')
            return 0;
    return 1;
}




