#include <stdio.h>

int main()
{
	int x, *px;
	px = &x;
	*px = 5;

	return 0;
}
