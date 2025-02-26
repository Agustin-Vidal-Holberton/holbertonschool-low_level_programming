#include "main.h"
/**
*more_numbers - Prints numbers from 0 - 14, ten times
*Return: numbers from 0 - 14.
*/
void more_numbers(void)
{
	int row = 0, num;

	while (row < 10)
	{
		num = 0;
		while (num <= 14)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
			num++;
		}
		_putchar('\n');
		row++;
	}
}
