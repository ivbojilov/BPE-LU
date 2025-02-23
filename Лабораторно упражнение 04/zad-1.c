/*
1. Реализирайте програмата от Пример 1, като използвате оператор break, за да прекъснете
обработката при въвеждане на стойността за спиране на обработката.
*/

#include <stdio.h>

int main()
{
	int input, sum;
	sum = 0;

	printf("Enter value:");
	scanf("%d", &input);
	
	while (1)
	{
		sum += input;
		printf("Enter value:");
		scanf("%d", &input);
		
		if(input == -999)
		{
			break;
		}
	}
	
	printf("The sum is: %d.\n", sum);
	
	return 0;
}
