/*
1. Напишете програма, която намира сумата на целите числа в зададен от потребителя
диапазон [a;b], като стойностите за a и b се въвеждат от клавиатурата.
Забележка: При прочитането на стойностите за a и b е нужно да се направи проверка дали a<b
и ако това не е така да се поиска въвеждане на нова стойност за b.
*/

#include <stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	int sum = 0;
	int i = 0;
	
	printf("Enter a: \n");
	scanf("%d", &a);	
	
	do {
		printf("Enter b: \n");
		scanf("%d", &b);
	} while(a >= b);
	
	for(i = a; i <= b; i++)
	{
		sum = sum + i;
	}
	
	printf("Entered limits: a = %d; b = %d\n", a, b);
	printf("Sum = %d\n", sum);
	

	

	return 0;
}
