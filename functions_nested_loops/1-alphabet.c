#include "main.h"
/**
*print_alphabet - Principal funtion.
*Description: Prints the alphabet in lowercase, followed by a new line.
*/
void print_alphabet(void)/*This will print the alphabet*/
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');

}
