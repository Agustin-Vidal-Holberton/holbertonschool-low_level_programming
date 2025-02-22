#include "main.h"
/**
*print_last_digit - Principal funtion.
*@number: The numer to check
*Description: Computes and prints the last digit of 'number'.
*Return: The last digit of 'number'.
*/
int print_last_digit(int number)
{
	int last_digit;

	last_digit = number % 10; /*Obteins the last digit*/

	if (last_digit < 0) /*Converts to positive if it's negative*/
	{
		last_digit = -last_digit;
	}
	_putchar(last_digit + '0');
	return (last_digit);
}
