#include <locale.h>;
#include <stdio.h>;

void main()
{
	setlocale(LC_ALL, "RUS");

	int A = 5, B = 10, C = 12, D = 20, R;
	R = D - A - B - C;
	printf("%+d", R);

	return 0;
}