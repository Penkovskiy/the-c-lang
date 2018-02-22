// far2cel.c - Печатает таблицы температур Целсий - Фаренгейт
#include <stdio.h>

int main()
{
	float fahr;
	float celcius;

	int lower, upper, step;

	lower = 0; // Нижняя граница таблицы температур
	upper = 300; // Верхняя граница таблицы температур
	step = 20; // Шаг изменения температуры Цельсия

	fahr = lower;
	while (fahr <= upper) {
		celcius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f\t%6.1f\n", fahr, celcius);
		fahr = fahr + step;
	}
	
	return 0;
}
