/*
1. В Пример №6 заменете функция malloc() с calloc() и сравнете получаваните резултати в двата
случая. Добавете възможност потребителя сам да определя размера на блока за запис на
цели числа.
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, *p = NULL;
	int number;
	
	printf("Enter number of blocks to use:\n");
	scanf("%d", &number);
	
	p = (int *)calloc(number, sizeof(int));
	
	if(p == NULL)
	{
		printf("Error!\n");
		return 1;
	}
	
	for(i = 0; i < number; i++)
	{
		printf("Element %d = ", i);
		scanf("%d", (p+i));
	}
	
	printf("Entered values: \n");
	
	for(i = 0; i < number; i++)
	{
		printf("Element %d = %d\n", i, *(p+i));
	}
	
	printf("Size of block: %lu bytes\n", number*sizeof(int));
	
	if(p != NULL)
	{
		free(p);
		printf("Memory free!\n");
		p = NULL;
	}

	return 0;
}
