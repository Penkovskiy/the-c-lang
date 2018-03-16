// escape.c - Версия программы из 1 главы с использованием switch
#include <stdio.h>
#include <string.h>
#include <assert.h>

void escape(char from[], char to[]);
void unescape(char from[], char to[]);


int main()
{
    char str[100];
    char unesc[100];

    escape("Hello\tworld", str);
    assert(strcmp(str, "Hello\\tworld") == 0);
    unescape(str, unesc);
    assert(strcmp(unesc, "Hello\tworld") == 0);

    escape("Hello\nworld", str);
    assert(strcmp(str, "Hello\\nworld") == 0);
    unescape(str, unesc);
    assert(strcmp(unesc, "Hello\nworl") == 0);

    escape("Hello\\world", str);
    assert(strcmp(str, "Hello\\\\world") == 0);
    unescape(str, unesc);
    assert(strcmp(unesc, "Hello\\world") == 0);

    return 0;
}

void escape(char from[], char to[])
{

}

void unescape(char from[], char to[])
{

}
