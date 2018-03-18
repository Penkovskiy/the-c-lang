// shellsort.c -- Сортировка методом Шелла
#include <assert.h>

void shellsort(int v[], int n);

int main()
{
    int arr[5] = {5, 2, 1, 3, 4};
    shellsort(arr, 5);
    for (int i = 0; i < 5; i++)
        assert(arr[i] == i+1);
    return 0;
}

void shellsort(int v[], int n)
{
    int gap;
    int i;
    int j;
    int temp;

    for (gap = n / 2; gap > 0; gap /= 2)
        for (i = gap; i < n; i++)
            for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap) {
                temp = v[j];
                v[j] = v[j + gap];
                v[j + gap] = temp;
            }
}

