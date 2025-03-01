#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, *p = NULL;
	
	p = (int *)malloc(5*sizeof(int));
	
	if(p == NULL)
	{
		printf("Error!\n");
		return 1;
	}
	
	for(i = 0; i < 5; i++)
	{
		printf("Element %d = ", i);
		scanf("%d", (p+i));
	}
	
	printf("Entered values: \n");
	
	for(i = 0; i < 5; i++)
	{
		printf("Element %d = %d\n", i, *(p+i));
	}
	
	printf("Size of block: %lu bytes\n", 5*sizeof(int));
	
	if(p != NULL)
	{
		free(p);
		printf("Memory free!\n");
		p = NULL;
	}

	return 0;
}
