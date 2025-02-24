#include "main.h"
/**
*print_diagonal - Draws a diagonal line on the terminal.
*@n: Number of times '\' should be printed.
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0) /*Si n es mayor a 0, imprimimos la diagonal*/
	{
		for (i = 0; i < n; i++) /*controla las lineas*/
		{
			for (j = 0; j < i; j++) /*Imprime espacios antes de '\' */
			{
				_putchar(' ');
			}
			_putchar('\\'); /* Imprime la barra diagonal */
			_putchar('\n'); /* Imprime nueva linea despues de cada '\' */
		}
	}
	else
	{
		_putchar('\n'); /* si n <=0, solo imprime un salto de linea */
	}
}
