#include "main.h"
/**
* factorial - Returns the factorial of a given number.
* @n: The number to calculate the factorial of.
* Return: The factorial of the number, or -1 if the number is less than 0.
*/
int factorial(int n)
{
	if (n < 0) /*Caso de error: si el numero es menor que 0*/
	{
		return (-1);
	}
	if (n == 0) /*Caso base: el factorial de 0 es 1*/
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
