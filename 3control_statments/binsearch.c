// binsearch.c - Реализует ф-цию бинарного поиска
#include <stdio.h>
#include <assert.h>

int binsearch(int x, int v[], int len);

int main()
{
    int v[] = {1, 5, 7, 11, 23, 55, 152, 222};

    assert(binsearch(1, v, 8) == 0);
    assert(binsearch(222, v, 8) == 7);
    assert(binsearch(11, v, 8) == 3);
    assert(binsearch(16, v, 8) == -1);

    return 0;
}

