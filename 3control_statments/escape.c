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
    assert(strcmp(unesc, "Hello\nworld") == 0);

    escape("Hello\\world", str);
    assert(strcmp(str, "Hello\\\\world") == 0);
    unescape(str, unesc);
    assert(strcmp(unesc, "Hello\\world") == 0);

    return 0;
}

void escape(char from[], char to[])
{
    int i;
    int j;

    for (i = j = 0; from[i] != '\0'; i++, j++) {
        switch (from[i]) {
            case '\\':
                to[j++] = '\\';
                to[j] = '\\';
                break;
            case '\t':
                to[j++] = '\\';
                to[j] = 't';
                break;
            case '\n':
                to[j++] = '\\';
                to[j] = 'n';
                break;
            default:
                to[j] = from[i];
                break;
        }
    }
    to[j] = from[i]; // '\0'
}

void unescape(char from[], char to[])
{
    int i;
    int j;

    for (i = j = 0; from[i] != '\0'; i++) {
        if (from[i] == '\\') {
            i++;
            switch (from[i]) {
                case '\\':
                    to[j++] = '\\';
                    break;
                case 'n':
                    to[j++] = '\n';
                    break;
                case 't':
                    to[j++] = '\t';
                    break;
                default:
                    to[j++] = '\\';
                    to[j++] = from[i];
                    break;
            }
        }
        else 
            to[j++] = from[i];
    }
    to[j] = from[i]; // '\0'
}
