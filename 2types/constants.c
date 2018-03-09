#include <stdio.h>
#include <assert.h>

int strlen(char s[]);

int is_leap_year(int year);

// Enumeration constant - Константа перечисления
enum booleab {NO, YES}; // Value in enum starts with 0

enum escapes {BELL = '\a', BACKSPACE = '\b', TAB = '\t',
    NEWLINE = '\n', VTAB = '\v', RETURN = '\r'};

enum month {JAN = 1, FEB, MAR, APR, MAY, JUN,
    JUL, AUG, SEP, OCT, NOV, DEC};


int main()
{
    const int octal = 012; // 10 
    const int hex = 0xabc; // 2748

    int i;
    int c;

    int lim = 3;

    assert(strlen("12345") == 5);

    // for loop without || and &&
    for (i = 0; (i < lim - 1) == ((c = getchar()) != EOF) == (c != '\n'); i++)
        printf("%c\n", c);
}


// In <string.h> exist better version..
int strlen(char s[])
{
    int len;
    for (len = 0; s[len] != '\0'; len++)
        ;
    return len;
}


int is_leap_year(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}










