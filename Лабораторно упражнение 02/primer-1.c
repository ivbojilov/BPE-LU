
/*
Пример №1: Програма за изчисление стойност на функция y = a.x + 2.(15.b - c) при въведени a, b,
c и x от клавиатурата като реални стойности.
*/

#include <stdio.h>

int main()
{
	float a, b, c, x, y = 0;
	printf("a ="); scanf("%f", &a);
	printf("b ="); scanf("%f", &b);
	printf("c ="); scanf("%f", &c);
	printf("x ="); scanf("%f", &x);
	y=a*x+2*(15*b-c);
	printf("y=%.2f", y);
	
	return 0;
}
