#include <stdio.h>
#include <assert.h>

int strlen(char s[]);

int is_leap_year(int year);

int atoi(char s[]);

int upper(int c);

int lower(int c);

int rand(void);
void srand(unsigned int seed);

long htol(char s[]);

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

    assert(htol("0x3") == 3);
    assert(htol("0xa") == 10);
    assert(htol("0x13") == 19);
    assert(htol("0xff") == 255);

    assert(upper('a') == 'A');
    assert(upper('T') == 'T');
    assert(upper(';') == ';');


    assert(lower('A') == 'a');
    assert(lower('a') == 'a');
    assert(lower(';') == ';');


    assert(atoi("12345") == 12345);
    assert(atoi("12345sdf") == 12345);
    assert(atoi("012345") == 12345);

    assert(strlen("12345") == 5);


    // for loop without || and &&
    // for (i = 0; (i < lim - 1) == ((c = getchar()) != EOF) == (c != '\n'); i++)
       //  printf("%c\n", c);
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


int atoi(char s[])
{
    int i;
    int n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
        n = 10 * n + (s[i] - '0');
    return n;
}


int upper(int c)
{
    if (c >= 'a' && c <= 'z')
        return c + 'A' - 'a';
    return c;
}


int lower(int c)
{
    return (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : c;
}

unsigned long int next = 1;

// rand -- return random num 0..32767
int rand(void)
{
    next = next * 1103515245 + 1235;
    return (unsigned int) (next / 65536) % 32768;
}

// srand: set seed for rand()
void srand(unsigned int seed)
{
    next = seed;
}

int is_hex(char c) 
{
    return (c >= '0' && c <= '9') || (lower(c) >= 'a' && lower(c) <= 'f');
}
int hex2i(char i)
{
    if (i >= '0' && i <= '9')
        return i - '0';
    return 10 + lower(i) - 'a';
}

// Exercise 2.3 hex to long
long htol(char s[])
{
    long i;
    int n;

    if (s[0] != '0')
        return -1;
    if (lower(s[1]) != 'x')
        return -1;
        
    n = 0;
    for (i = 2; is_hex(s[i]); i++)
        n = n * 16 + hex2i(s[i]);
    return n;
}












