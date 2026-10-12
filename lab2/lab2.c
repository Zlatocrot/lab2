

#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


void task1()
{
	printf("123\n");
	printf("1\n2\n3\n");
	printf("1\n\t2\n\t\t3\n");
	printf("%d\n\t %d\n\t\t %d\n\t\t\t %d\n", 1, 2, 3, 4);
	printf("%10.3f\n ", 12.234657);
	printf("%8.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 7 % 5);
	printf("если умножить %d на %d то получим %d\n ", 7, 5, 7 * 5);
	printf("%d разделить %d равно %d\n ", 5., 2000000., 5. / 2000000);
	printf("%f разделить %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%g разделить %g равно %g\n ", 5., 2000000., 5. / 2000000);
	printf("%e разделить %e равно %e\n ", 5., 2000000., 5. / 2000000);
}


void task2()
{
	int N, K;
	N = 5;
	K = 6;

	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идёт %d минута суток\n", N);
	printf("До полуночи осталось %d часов и %d минут\n", N, K);
	printf("С 8.00 прошло %d секунд\n", N);
	printf("Текущий час = %7.2f суток и текущая минута = %7.2f часа\n", N / 24., K / 60.);
}


void task3()
{
	float L = 13333.0;
	float n = 4.0;
	int k, m;
	k = 4;
	m = 6;
	printf("Дано:\n\t\t %7.0f\n\t\t %7.0f\n\t\t __________\nОтвет:\n\t\t +%0*.*f\n\n\n", n, L, k, m, n / L);
}


void taskdz_15()
{
	float S, X, L;
	float stoimost;

	S = 104.;
	X = 8.;
	L = 13. / 100.;

	stoimost = (S / L) * X;
	printf("Грей заплатил %d золотых за парус площадью %d и длиной рулона %d при стоимости %d за метр\n", stoimost, S, L, X);
}


int main()
{
	SetConsoleCP(CP_UTF8);
	SetConsoleOutputCP(CP_UTF8);
	setlocale(LC_ALL, ".UTF-8");

	task1();
	task2();
	task3();
	taskdz_15();

	system("pause");

	return 0;
}