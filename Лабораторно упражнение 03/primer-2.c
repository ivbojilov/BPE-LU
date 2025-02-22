/*
Пример 2: Програмата въвежда символ и определя дали е гласна буква или край на
файл/грешка.
В този случай трябва да се направи избор между три възможности и е по-добре да се използва
оператор switch.
*/

#include <stdio.h>
int main()
{ 
	int ch; // символ
	
	printf("Enter character = ");
	ch = getchar(); // Въвеждане на символ
	
	switch(ch) // В случай, че ch е
	{ 
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			// Гласна буква
			printf("%c is a vowel\n", ch);
			break;
		
		case EOF:
			// Край на файл/грешка
			printf("Input character is end-of-file or an error occurs\n");
			break;
		
		default:
			// Неочакван символ
			printf("Input character %c is unexpected symbol\n", ch);
		
		break;
	}
	
	return 0;
}
