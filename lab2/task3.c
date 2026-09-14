#include <locale.h>

#include <stdio.h>

void main()
{
	setlocale(LC_ALL, "ru_RU.UTF-8");
	float L = 13333.0;
	float n = 4.0;
	int k, m;
	k = 4;
	m = 6;
	printf("Дано:\n\t\t %7.0f\n\t\t %7.0f\n\t\t __________\nОтвет:\n\t\t +%0*.*f\n\n\n",n,L,k,m,n/L);
}