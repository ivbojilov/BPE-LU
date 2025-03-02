/*
Пример 1: Програма, която събира числата 5 и 6 с помощта на потребителска функция.
*/



#include <stdio.h>

int sum(int a, int b); // деклариране на функция sum

int main() // главна функция на програмата
{
	int total;
	
	total = sum(5, 6); // извикване на функция sum
	
	printf("The sum is: %d\n", total);
	
	return 0;
}

int sum (int a, int b) // дефиниция на функция
{
	int s;
	s = a+b;
	
	return s; // връщане на резултат от работата на функция sum
}
