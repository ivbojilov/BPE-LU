/*
3. Напишете С програма, която въвежда две реални числа от клавиатурата и определя тяхната
сума, разлика и произведение. Извежданите върху екрана резултати трябва да са с точност 3
знака след десетичната запетая.
*/


#include <stdio.h>

int main()
{
	float a = 0;
	float b = 0;
	
	printf("Enter two floats: \n");
	scanf("%f%f", &a, &b);
	
	printf("a + b = %.3f\n", a+b);
	printf("a - b = %.3f\n", a - b);
	printf("a * b = %.3f\n", a * b);


	return 0;
}
