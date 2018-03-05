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

void fix_border(char from[], char to[])
{
    int i;
    int line_idx = 0;
    int break_line_idx; // can break the line in this index

    for (i = 0; (c = from[i]) != '\n'; i++) {
        if (is_space(c)) {
            if (line_idx == BORDER) {
                to[j++] = '\n';
                break_line_world = 0;
                break_line_idx = 0;
            }
            else if (line_idx < BORDER) {
                add_world(from, to, break_line_idx, i);
                break_line_idx = i;
            }
            else {
                // if long world - need separate this;
                // len of world
                world_len = line_idx - break_line_idx;  
                if (break_line_idx < BORDER / 2) {
                    while (BORDER < i) // TODO
                    add_world(break_line_idx, 
                            

    }

    
int is_space(char c)
{
    return c == ' ' || c == '\t';
}
