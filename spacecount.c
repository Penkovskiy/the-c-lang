// spacecount.c - count whitespace charecter like space, tab or new line
// Exersice 1.8
#include <stdio.h>

int main()
{
    int spaces;
    int tabs;
    int newlines;

    int c;

    spaces = tabs = newlines = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            spaces++;
        else if (c == '\t')
            tabs++;
        else if (c == '\n')
            newlines++;
    }
    printf("spaces: %d\ntabs: %d\nnewlines: %d\nall spaces charecers: %d\n",
            spaces, tabs, newlines, spaces + tabs + newlines);

    return 0;
}
