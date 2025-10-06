#include <locale.h>;
#include <stdio.h>;

void main()
{
	setlocale(LC_ALL, "RUS");

	int N = 10, K = 17;  //1)

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K); //2)
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", (24 * 60 - (N * 60 + K)) / 60, (24 * 60 - (N * 60 + K)) % 60);
	printf("С 8.00 прошло %d секунд\n", (N * 60 + K - 8 * 60) * 60);
	printf("Текущий час = %1.2f суток и текущая минута = %1.2f часа\n", N / 24., K / 60.);

	return 0;

}
