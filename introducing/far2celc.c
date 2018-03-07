// far2cel.c - Печатает таблицы температур Целсий - Фаренгейт
#include <stdio.h>

#define LOWER 0 // Нижняя граница таблицы температур
#define UPPER 300 // Верхняя граница таблицы температур
#define STEP 20 // Шаг изменения температуры Цельсия

double fahr2celc(double fahr);

int main()
{
	float fahr;
	float celcius;

	int lower, upper, step;

	fahr = lower;
    for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) 
		printf("%3.0f\t%6.1f\n", fahr, fahr2celc(fahr));
	
	return 0;
}

double fahr2celc(double fahr)
{
   return (5.0 / 9.0) * (fahr - 32.0);
}

