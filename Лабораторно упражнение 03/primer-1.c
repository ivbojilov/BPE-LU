/*
Пример №1: Програма, която проверява дали прочетената целочислена стойност от
клавиатурата с функция scanf() е четно или нечетно число

*/

#include <stdio.h>

int main()
{
	int x = 0, status;
	printf("x = ");
	status = scanf("%d", &x);
	if(x % 2 == 0)
		printf("%d is an even number", x);
	else
		printf("%d is an odd number", x);
	
	return 0;
}
