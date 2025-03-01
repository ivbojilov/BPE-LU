#include <stdio.h>

int main()
{
	int num; // Деклариране на целочислена променлива
	int *pNum; // Деклариране на указател към цели числа
	
	pNum = &num; // Свързване на указателя с променливата
	num = 100; // Задаване на стойност 100 за променливата num
	
	printf("Using num:\n");
	printf("Value of num: %d\nAddress of num: %u\n", num, &num);
	
	// Осъществяване на достъп до num чрез указателя pNum

	printf("\nUsing the pointer pNum:\n");
	printf("Value of num: %d\nAddress of num: %u\n", *pNum, pNum);
	

	return 0;
}
