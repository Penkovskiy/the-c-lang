#include <stdio.h>
#include <assert.h>

int strlen(char s[]);


int main()
{
    int octal = 012; // 10 
    int hex = 0xabc; // 2748

    assert(strlen("12345") == 5);
}


int strlen(char s[])
{
    int len;
    for (len = 0; s[len] != '\0'; len++)
        ;
    return len;
}
