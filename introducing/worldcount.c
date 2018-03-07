// worldcount.c - $B'e'a'b'`'k'V'_'_'Q'q(B $B'S'V'b'c'Z'q(B wc 
// $B'1'U'c'i'Z'm'S'Q'V'd(B $B'c'd'b'`'\'Z(B, $B'c']'`'S'Q(B $B'Z(B $B'c'Z'^'S'`']'m(B
#include <stdio.h>

#define IN 1 // $B'#'_'e'd'b'Z(B $B'c']'`'S'Q(B
#define OUT 0 // $B'3'_'Q'b'e'X'Z(B $B'c']'`'S'Q(B

int main()
{
    int newlines;
    int newworlds;
    int newcharecters;

    int state;

    int c;
    newlines = newworlds = newcharecters = 0;

    state = OUT;
    while ((c = getchar()) != EOF) {
        newcharecters++;
        if (c == '\n')
            newlines++;
        if (c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT) {
           state = IN;
           ++newworlds;
        }
    }
    printf("%d %d %d\n", newlines, newworlds, newcharecters);

    return 0;
}



