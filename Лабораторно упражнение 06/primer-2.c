/*
Пример 2: Програма, която увеличава с две стойността на едно въведено от потребителя цяло
число с помощта на потребителска функция, която използва обикновена променлива като
параметър.
*/

#include <stdio.h>

void change(int a); // параметърът е обикновена променлива

int main()
{
	int x;
	printf("x = "); scanf("%d", &x);
	
	change(x);
	
	printf("change = %d\n", x);

	return 0;
}

void change(int a)
{
	a = a + 2;
}
