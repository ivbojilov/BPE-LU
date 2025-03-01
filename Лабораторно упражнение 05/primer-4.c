#include <stdio.h>

int main()
{
	int a, *pa = NULL;
	
	if(pa == NULL)
	{
		pa = &a;
	}

	return 0;
}
