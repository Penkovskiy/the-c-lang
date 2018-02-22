// far2cel.c - Печатает таблицы температур Целсий - Фаренгейт
#include <stdio.h>

int main()
{
	int fahr;
	int celcius;

	int lower, upper, step;

	lower = 0; // Нижняя граница таблицы температур
	upper = 300; // Верхняя граница таблицы температур
	step = 20; // Шаг изменения температуры Цельсия

	fahr = lower;
	while (fahr <= upper) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%3d\t%6d\n", fahr, celcius);
		fahr = fahr + step;
	}
	
	return 0;
}
