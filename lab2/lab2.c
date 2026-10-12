#include <stdio.h>
#include <locale.h>
void prac1();
void prac2();
void prac3();
void dz_15();
int main() {
	setlocale(LC_ALL, "Ru");
	printf("Практика 2\n");
	printf("\nЗадание 1\n");
	prac1();
	printf("\nЗадание 2\n");
	prac2();
	printf("\nЗадание 3\n");
	prac3();
	printf("\nДомашнее задание\n");
	dz_15();
	return 0;
}
void prac1()
{
	printf("ЗАДАНИЕ 1\n");
	printf("123\n\n ");
	printf("ЗАДАНИЕ 2\n");
	printf("1\n2\n3\n\n ");
	printf("ЗАДАНИЕ 3\n");
	printf("1\n\t2\n\t\t3\n\n ");
	printf("ЗАДАНИЕ 4\n");
	printf("%1d\n%2d\n%3d\n%4d\n\n ", 1, 2, 3, 4);
	printf("ЗАДАНИЕ 5\n");
	printf("%10.3f\n\n ", 12.234657);
	printf("ЗАДАНИЕ 6\n");
	printf("%10.5f\n\n ", 12.234657);
	printf("ЗАДАНИЕ 7\n");
	printf("Остаток от деления %d на %d равен %d\n\n ", 5, 2, 5 % 2);
	printf("ЗАДАНИЕ 8\n");
	printf("деление %.0f на %.0f равно %.1f\n\n ", 7.0, 5.0, 7.0 / 5.0);
	printf("ЗАДАНИЕ 9\n");
	printf("умножение %.0f на %.0f равно %.0f\n\n ", 2000.0, 4.0, 2000.0 * 4.0);
	printf("ЗАДАНИЕ 10\n");
	printf("%d разделить на %d равно %d\n ", 5, 2000000, 5 / 2000000);
	printf("%f разделить на %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%g разделить на %g равно %g\n ", 5., 2000000., 5. / 2000000);
	printf("%e разделить на %e равно %e\n ", 5., 2000000., 5. / 2000000);
}
void prac2()
{
	int N, K;
	N = 8;
	K = 50;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n", N * 60 + K);
	printf("До полуночи осталось %d часов и %d минут\n", 24 - N - 1, 60 - K);
	printf("С 8.00 прошло %d секунд\n", K * 60);
	printf("Текущий час  = %.2f суток  и текущая минута =  %.2f часа\n", N / 24., K / 60.);
}
void prac3()
{
	float L = 13333.0;
	float n = 4.0;
	int k, m;
	k = 4;
	m = 6;
	printf("Дано:\n\t\t %7.0f\n\t\t %7.0f\n\t\t __________\nОтвет:\n\t\t +%0*.*f\n\n\n", n, L, k, m, n / L);
}
void dz_15()
{
	float S, X, L;
	float stoimost;

	S = 104.;
	X = 8.;
	L = 13. / 100.;

	stoimost = (S / L) * X;
	printf("Грей заплатил %d золотых за парус площадью %d и длиной рулона %d при стоимости %d за метр\n", stoimost, S, L, X);
}