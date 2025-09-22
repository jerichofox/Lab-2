#include <locale.h>;
#include <stdio.h>;

void main()
{
	setlocale(LC_ALL, "RUS");		

	printf("%d разделить на %d равно 00%3.7f\n\n", 2, 1323, 2. / 1323.);

	printf("Дано:  %d, %d\nОтвет: 00%3.7f\n\n", 2, 1323, 2. / 1323.);  //1

	printf("Дано:\n \t   %d\n \t%d\n \t____________\nОтвет:\n \t00%3.7f\n\n", 2, 1323, 2. / 1323.);  //2

	printf("Дано:\n \t   %d\n \t%d\n \t____________\nОтвет:\n \t%+3.7f\n\n", 2, 1323, 2. / 1323.);  //3

	return 0;
}