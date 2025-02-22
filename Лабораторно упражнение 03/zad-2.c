/*
2. Напишете програма, която намира стойностите на функция y(x) за всички стойности на х в
даден интервал от стойности [beg; end] със стъпка delta. Стойностите на beg, end, delta, m, a и
b са реални числа, въвеждани от клавиатурата. (Тази операция се нарича табулиране на
функция.)

y = b + x, при x <= m
y = a*x / (4-x), при x > m

Забележка: При въвеждане на стойностите за beg и end е нужно да се направи проверка дали
beg < end и ако това не е така да се поиска въвеждане на нова стойност за end. Трябва да бъде
проверено и дали стойността на m лежи в интервала [beg; end]. Не трябва да се допуска
деление на нула при извършване на изчисление по втория израз. При възникване на такава
ситуация изчислението може да се избегне с помощта на оператор continue.
*/

#include <stdio.h>

int main()
{
	float beg = 0;
	float end = 0;
	float delta = 0;
	float m = 0;
	float a = 0;
	float b = 0;
	float y = 0;
	float x = 0;
	
	printf("Enter beg: \n");
	scanf("%f", &beg);
	
	do{
		printf("Enter end: \n");
		scanf("%f", &end);
	} while(end <= beg);
	
	printf("Enter delta: \n");
	scanf("%f", &delta);
	
	do{
		printf("Enter m: \n");
		scanf("%f", &m);
	} while(m < beg || m > end);
	
	printf("Enter a: \n");
	scanf("%f", &a);	

	printf("Enter b: \n");
	scanf("%f", &b);
	
	for(x = beg; x <= end; x += delta)
	{
		if(x <= m)
		{
			y = b + x;
		} else if (x != 4){
		
			y = a*x / (4 - x);
		} else
			continue;
		
		printf("x = %f; y = %f\n", x, y);
	}
	


	return 0;
}































