#include "main.h"
/**
* _pow_recursion - Returns the value of x raised to the power of y.
* @x: The base number.
* @y: The exponent.
* Return: The result of x^y, or -1 if y is negative.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0) /*Caso de error: exponentes negativos no permitidos*/
	{
		return (-1);
	}
	if (y == 0) /*Caso base: cualquier numero elevado a 0 es 1*/
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));/*LLamada recursiva: x * (x^(y-1))*/
}
