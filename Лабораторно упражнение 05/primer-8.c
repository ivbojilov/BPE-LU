/*
Пример 8: Програма, която създава динамичен блок за 5 цели числа и го преоразмерява за 8
цели числа
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, *p, *p1 = NULL;
	
	p = (int *)calloc(5, sizeof(int));
	
	printf("Initial block:\n");
	
	for(i = 0; i < 5; i++)
	{
		printf("Element %d = %d\n", i, *(p+i));
	}
	
	printf("Size of block: %lu bytes, first address: %u\n", 5*sizeof(int), p);
	printf("Enter numbers in the block:\n");
	
	for(i = 0; i < 5; i++)
	{
		printf("Element %d = ", i); scanf("%d", (p+i));
	}
	
	printf("You entered in the block:\n");
	
	for(i = 0; i < 5; i++)
	{
		printf("Element %d = %d\n", i, *(p+i));
	}
	
	p1 = (int *)realloc(p, 8*sizeof(int));
	
	if(p1 == NULL)
	{
		printf("Error!\n"); return 1;
	} else
	{
		p = p1; p1 = NULL;
	}
	
	printf("Initial content of new block:\n");
	
	for(i = 0; i < 8; i++)
	{
		printf("Element %d = %d\n", i, *(p+i));
	}
	
	printf("Size of block: %d bytes, first address: %u\n", 8*sizeof(int), p);
	printf("Enter numbers in new block:\n");
	
	for(i = 0; i < 8; i++)
	{
		printf("Element %d = \n", i); scanf("%d", (p+i));
	}
	
	printf("You entered the following in the new block:\n");
	
	for(i = 0; i < 8; i++)
	{
		printf("Element %d = %d\n", i, *(p+i));
	}
	
	if(p != NULL)
	{
		free(p);
		printf("Memory is free!\n");
		p = NULL;
	}

	return 0;
}



























