#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int num, first, two, thr;
	puts("Введите трёхзначное число:");
	scanf("%d", &num);
	first = num / 100;
	two = (num / 10) - (first * 10);
	thr = num - (two * 10) - (first * 100);
	printf("Первая цифра числа: %d\n Последняя цифра числа: %d\n Сумма числа: %d\n", first, thr, first + two + thr);
	printf("Число задом наперёд: %d%d%d", thr, two, first);
}
