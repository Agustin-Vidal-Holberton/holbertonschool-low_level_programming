#include "main.h"
/**
*print_sign - Principal funtion.
*@number: The numer to check
*Description: Prints + if number is greater than zero,
*0 if number is zero, and - if number is less than zero.
*Return: 1 if number > 0, 0 if number == 0, -1 if number < 0.
*/
int print_sign(int number)
{
	if (number > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (number == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
