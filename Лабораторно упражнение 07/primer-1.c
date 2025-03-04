#include <stdio.h>

void towers(int n, char x, char z, char y);

int main()
{
	int n;
	printf("Enter number of disks: \n");
	scanf("%d", &n);
	printf("Reshenie na zadachata: \n");
	towers(n, 'A', 'C', 'B');
	printf("\n");

	return 0;

}


void towers(int n, char x, char z, char y)
{
	// Ако дискът е само един се премества от А на С
	if(n == 1)
		printf("\nMove disk 1 from pole %c to pole %c", x, z);
	else
	{
		// Премести горните n-1 диска от А на В, използвайки С като помощен
		towers(n-1, x, y, z);
		
		// Премести оставащия диск от А на С
		printf("\nMove disk %d from pole %c to pole %c", n, x, z);
		
		// Премести n-1 диска от В на С, използвайки А като помощен
		towers(n-1, y, z, x);
	
	}

}









