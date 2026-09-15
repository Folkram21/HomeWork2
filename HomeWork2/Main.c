#include <stdio.h>

int calculateIncome() {
	float a = 7.99; // стоимость первых газет
	float x = 4.56; // стоимость последующих газет газет
	int firstSold = 75; // количество проданных газет за первую цену
	int totalSold = 133; // общее количество проданных газет

	float income; // выручка

	income = firstSold * a + (totalSold - firstSold) * x;

	return income;
}

void main() {
	float result = calculateIncome();

	printf("%-10.2f", result);
}
