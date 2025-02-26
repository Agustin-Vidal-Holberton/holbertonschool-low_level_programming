#include "main.h"
/**
*print_triangle - Prints a triangle using the '#' character.
*@size: The size of the triangle.
*Return: Void (nothing)
*/
void print_triangle(int size)
{
	int i, j, spaces;

	if (size <= 0)
	{
		_putchar('\n');/*Imprime solo una nueva linea*/
		return;
	}
	for (i = 1; i <= size; i++) /* Filas del triangulo */
	{
		for (spaces = size - i; spaces > 0; spaces--) /* Espacios antes de '#' */
		{
			_putchar(' ');
		}
		for (j = 1; j <= i; j++)/*Imprime los '#'*/
		{
			_putchar('#');
		}
		_putchar('\n');/*Salto de linea despues de cada fila */
	}
}
