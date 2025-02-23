/*
3. Напишете програма, която чете от клавиатурата поредица от цели числа. Въвеждането
спира при въвеждане на стойност 0. Програмата да изчислява и извежда броя на въведените
отрицателни числа и сумата на въведените числа, чиято стойност е кратна на 5.
*/

#include <stdio.h>

int main()
{
	int number = 0;
	int cnt = 0;
	int sum = 0;
	
	do {
		printf("Enter a number: \n");
		scanf("%d", &number);
		
		if(number < 0)
		{
			cnt++;
		}
		
		if(number % 5 == 0)
		{
			sum = sum + number;
		}
	} while(number != 0);
	
	printf("Quantity of negative numbers: %d\n", cnt);
	printf("Sum of multiples of 5: %d\n", sum);

	return 0;
}
