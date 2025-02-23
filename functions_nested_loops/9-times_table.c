#include "main.h"
/**
*times_table - Principal funtion.
*Description: Prints the multiplication table in formatted way.
*Return: 9 times table.
*/
void times_table(void)
{
	int row, col, product;

	for (row = 0; row <= 9; row++) /*Row 0 to 9*/
	{
		for (col = 0; col <= 9; col++) /*Column 0 to 9*/
		{
			product = row * col;

			if (col != 0) /*If is not the firs column prints the ',' and ' '*/
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
				}
			}

			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
