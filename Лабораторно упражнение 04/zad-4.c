/*
3. Напишете програма, която чете от клавиатурата поредица от цели числа. Въвеждането
спира при въвеждане на стойност 0. Програмата да изчислява и извежда броя на въведените
отрицателни числа и сумата на въведените числа, чиято стойност е кратна на 5.
*/

#include <stdio.h>

int main()
{
	int number = -1;
	float mean = 0;
	float sum = 0;
	int cnt = 0;
	int flag = 0;

	do {
		printf("Enter a number: \n");
		flag = scanf("%d", &number);
		
		if (flag)
		{
			cnt++;
			sum = sum + number;
		} else {
			getchar();
		}
		
	} while(number != 0);
	
	if(cnt)
	{
		mean = sum/cnt;
		
		printf("Mean = %f\n", mean);
	} else {
		printf("Division by zero!\n");
	}
	

	return 0;
}
