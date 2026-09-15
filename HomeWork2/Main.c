#include <stdio.h>
#include <locale.h>

void calculateIncome() {
	float a = 7.99; // стоимость первых газет
	float x = 4.56; // стоимость последующих газет газет
	int firstSold = 75; // количество проданных газет за первую цену
	int totalSold = 133; // общее количество проданных газет

	float income; // выручка

	income = firstSold * a + (totalSold - firstSold) * x; // рассчёт выручки

	printf("УСЛОВИЯ ЗАДАЧИ\n"
		"Мальчик, продающий на улице газеты, зарабатывает %-2.2f руб. на продаже первых 75 газет. "
		"На каждой из остальных проданных газет он зарабатывает по %-2.2f руб. Напишите программу, "
		"которая выведет на дисплей заработок мальчика, если он продаст 133 газеты.\n\n", a, x);

	printf("НАЧАЛЬНЫЕ ЗНАЧЕНИЯ\n"
		"Стоимость первых газет: %-2.2f руб.\n"
		"Стоимость последующих газет: %-2.2f руб.\n"
		"Количество проданных газет за первую цену: %d\n"
		"Общее количество проданных газет: %d\n\n"
		"РАСЧЁТЫ\n"
		"Количество проданных газет за вторую цену: (%d - %d) = %d\n"
		"Общая стоимость первых газет: (%d * %-2.2f) = %-5.2f руб.\n"
		"Общая стоимость последующих газет: (%d * %-2.2f) = %-5.2f руб.\n\n"
		"\tИТОГО: (%d * %-2.2f + %d * %-2.2f) = %-10.2f руб.\n",
		a, x, firstSold, totalSold, totalSold, firstSold, totalSold - firstSold, 
		firstSold, a, firstSold * a, totalSold - firstSold, x, (totalSold - firstSold) * x, 
		firstSold, a, totalSold - firstSold, x, income);
}

void main() {
	setlocale(LC_CTYPE, "RUS");

	calculateIncome();
}
