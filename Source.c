#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "RUS");
	int num, first, two, thr;
	puts("������� ���������� �����:");
	scanf("%d", &num);
	first = num / 100;
	two = (num / 10) - (first * 10);
	thr = num - (two * 10) - (first * 100);
	printf("������ ����� �����: %d\n ��������� ����� �����: %d\n ����� �����: %d\n", first, thr, first + two + thr);
	printf("����� ����� ������: %d%d%d", thr, two, first);
}
