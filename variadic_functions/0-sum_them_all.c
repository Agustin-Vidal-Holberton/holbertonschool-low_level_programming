#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Suma todos sus parametros.
* @n: Numero de argumentos.
* Return: La suma de los parametros, o 0 si n es 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
