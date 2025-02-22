#include "main.h"
/**
*_abs - Principal funtion.
*@number: The numer to check
*Description: Returns the absolute value of number.
*Return: The absolute value of number.
*/
int _abs(int number)
{
	if (number < 0)
	{
		return (-number); /*Converts number '-' to '+'*/
	}
	return (number); /* If it's '+' or '0', remains the same*/
}
