#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {

	setlocale(LC_ALL, "Russian");

	int x;
	int y;
	float z;

	printf("������� ����� ����� x: ");
	scanf("%d", &x);

	printf("������� ����� ����� y: ");
	scanf("%d", &y);

	z = 5 * abs(x) + 20 * abs(y);

	printf("�������� ��������� z = %f\n", z);

	return 0;
}
