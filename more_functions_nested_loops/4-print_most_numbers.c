#include "main.h"
/**
* print_most_numbers - Prints numbers from 0 - 9, excluding 2 and 4
* Return: numbers from 0 - 9, excluding 2 and 4.
*/
void print_most_numbers(void)
{
	char num = '0';

	while (num <= '9')
	{
		if (num != '2' && num != '4')
		{
			_putchar(num);
		}
		num++;
	}
	_putchar('\n');
}
