/*
2. В Пример 8 променете кода на програмата, така че потребителят сам да избира размера на
новия динамичен блок при преоразмеряване. Проверете какви ще са резултатите при
намаляване на първоначалния размер на блока и при задаване на размер, равен на 0.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, *p, *p1 = NULL;
	int size = 0;
	
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
	
	
	printf("Enter size of new block:\n");
	scanf("%d", &size);
	
	
	p1 = (int *)realloc(p, size*sizeof(int));
	
	if(p1 == NULL)
	{
		printf("Error!\n"); return 1;
	} else
	{
		p = p1; p1 = NULL;
	}
	
	printf("Initial content of new block:\n");
	
	for(i = 0; i < size; i++)
	{
		printf("Element %d = %d\n", i, *(p+i));
	}
	
	printf("Size of block: %lu bytes, first address: %u\n", size*sizeof(int), p);
	printf("Enter numbers in new block:\n");
	
	for(i = 0; i < size; i++)
	{
		printf("Element %d = ", i); scanf("%d", (p+i));
	}
	
	printf("You entered the following in the new block:\n");
	
	for(i = 0; i < size; i++)
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



























