/*
4. Напишете програма, която по три въведени от потребителя цели числа определя чрез
потребителски функции:
- сумата на числата
- най-голямото от трите числа
- най-малкото от трите числа
- средно аритметичната стойност на числата

*/


#include <stdio.h>


int sum(int a, int b, int c);
int findMax(int a, int b, int c);
int findMin(int a, int b, int c);
float findMean(int a, int b, int c);

int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	
	printf("Enter a, b and c: "); scanf("%d%d%d", &a, &b, &c);
	
	printf("Sum = %d\n", sum(a, b, c));
	printf("Max = %d\n", findMax(a, b, c));
	printf("Min = %d\n", findMin(a, b, c));
	printf("Mean = %.2f\n", findMean(a, b, c));

	return 0;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}


int findMax(int a, int b, int c)
{
	int max = a;
	
	if(b > max) max = b;
	if(c > max) max = c;
	
	return max;
}

int findMin(int a, int b, int c)
{
	int min = a;
	if(b < min) min = b;
	if(c < min) min = c;
	
	return min;
}

float findMean(int a, int b, int c)
{
	return (a+b+c)/3.0;
	
}































