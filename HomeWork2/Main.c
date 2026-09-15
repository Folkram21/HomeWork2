#include <stdio.h>
#include <locale.h>

void calculateIncome() {
	float a = 7.99; // стоимость первых газет
	float x = 4.56; // стоимость последующих газет газет
	int firstSold = 75; // количество проданных газет за первую цену
	int totalSold = 133; // общее количество проданных газет

	float income; // выручка

	income = firstSold * a + (totalSold - firstSold) * x;

	printf("НАЧАЛЬНЫЕ УСЛОВИЯ\n"
		"Стоимость первых газет: %-2.2f у.е.\n"
		"Стоимость последующих газет: %-2.2f у.е.\n"
		"Количество проданных газет за первую цену: %d\n"
		"Общее количество проданных газет: %d\n\n"
		"РАСЧЁТЫ\n"
		"Количество проданных газет за вторую цену: (%d - %d) = %d\n"
		"Общая стоимость первых газет: (%d * %-2.2f) = %-5.2f\n"
		"Общая стоимость последующих газет: (%d * %-2.2f) = %-5.2f\n\n"
		"\tИТОГО: (%d * %-2.2f + %d * %-2.2f) = %-10.2f\n",
		a, x, firstSold, totalSold, totalSold, firstSold, totalSold - firstSold, 
		firstSold, a, firstSold * a, totalSold - firstSold, x, (totalSold - firstSold) * x, 
		firstSold, a, totalSold - firstSold, x, income);
}

void main() {
	setlocale(LC_CTYPE, "RUS");

	calculateIncome();
}
