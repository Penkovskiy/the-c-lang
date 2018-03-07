// space_reduce.c - Заменяет подряд идущие пробелы одним
// Excersice 1.9
#include <stdio.h>

#define MAXLEN 1000

int getline(char line[], int maxlen);
void space_reduce(char line[], char modify_line[]);

int main()
{
    int len;
    char line[MAXLEN];
    char modify_line[MAXLEN];

    while ((len = getline(line, MAXLEN)) > 0) {
        space_reduce(line, modify_line);
        printf("%s", modify_line);
    }

    
    return 0;
}


void space_reduce(char line[], char modify_line[])
{
    int i;
    int next_index;
    int has_space;

    char c;

    for (i = next_index = 0; (c = line[i]) != '\0'; i++, next_index++) {
        has_space = i > 0 && modify_line[next_index] == line[i] &&
                    (modify_line[next_index - 1] == ' ' ||
                      modify_line[next_index - 1] == '\t');
        if (has_space)
            while (line[i] == ' ' || line[i] == '\t') {
                 i++;
            }
        modify_line[next_index] = line[i];
    }
    modify_line[next_index] = '\0';
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


