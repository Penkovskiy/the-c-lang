// reversed.c -- Переворачивает строку
#include <string.h>
#include <assert.h>

void reverse(char s[]);

int main()
{
    char s[] = "12345";
    reverse(s);
    assert(strcmp(s, "54321") == 0);

    return 0;
}

void reverse(char s[])
{
    int i;
    int j;
    int c;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}
