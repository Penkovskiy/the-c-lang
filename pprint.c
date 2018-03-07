// ppring.c - Печатает символы, с stdin, не превышая граници
#include <stdio.h>
#include <uttils.h>


#define BORDER 60
#define MAXLEN 1000

#define IN 1 // In world
#define OUT 0 // Out the world

void fix_border(char from[], char to[]);

int main() 
{

    int len; // ?
    char line[MAXLEN];
    char new_line[MAXLEN];

    while ((len = getline(line, MAXLEN)) > 0) {
        fix_border(line, new_line);
        printf("%s", new_line);
    }


    return 0;
}

int is_space(char c);
int break_line(char from[], char to[], int i, int j);

void fix_border(char from[], char to[])
{
    int i;
    int j;
    int current_line_idx; // Индекс 

    for (i = 0; (c = from[i]) != '\n' || c != '\0'; i++) {
        if (current_line_idx == BORDER) {
            current_line_idx = break_line(from, to, i, j);
            
        }
        else {
            to[j++] = from[i];
            current_line_idx++;
        }
    }
    
        
int is_space(char c)
{
    return c == ' ' || c == '\t';
}


add_world(char from[], char to[], int to_idx, int from_idx, int end);
int break_line(char from[], char to[], int end, int j)
{
    int i;
    char c;

    for (i = end; i > end - BORDER / 2; i--, j--) {
        c = from[i];
        if (is_space(c)) {
            to[j] = '\n';
            return add_world(from, to, j, i, end);
        }
    }
}

    
    
add_world(char from[], char to[], int to_idx, int from_idx, int end)
{
    return 3;
}


