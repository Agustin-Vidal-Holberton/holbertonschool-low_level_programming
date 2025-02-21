#include "main.h"
/**
*print_alphabet_x10 - Principal funtion.
*Description: Prints the alphabet in lowercase x10, followed by a new line.
*/
void print_alphabet_x10(void)/*This will print the alphabet x10*/
{
	int i = 0;
	char letter;

	while (i < 10) /*This will print x10*/
	{
		letter = 'a';

		while (letter <= 'z') /*This will print the alphabet*/
		{
			_putchar(letter);
			letter++;
		}

		_putchar('\n');
		i++;
	}
}
