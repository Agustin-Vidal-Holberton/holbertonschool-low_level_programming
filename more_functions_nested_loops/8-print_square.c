#include "main.h"
/**
*print_square - Prints a square using the '#' character.
*@size: The size of the square.
*/
void print_square(int size)
{
	int i, j;

	if (size > 0) /*Si n es mayor a 0, imprime el cuadrado*/
	{
		for (i = 0; i < size; i++) /* Filas del cuadrado */
		{
			for (j = 0; j < size; j++) /* Columnas del cuadrado */
			{
				_putchar('#');
			}
			_putchar('\n'); /* Imprime nueva linea despues de cada fila */
		}
	}
	else
	{
		_putchar('\n'); /* si n <=0, solo imprime un salto de linea */
	}
}
