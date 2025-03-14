#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - Crea una matriz bidimensional de int inicializados en 0.
* @width: Ancho (cantidad de columnas).
* @height: Alto (cantidad de filas).
* Return: Puntero a la matriz, o NULL si falla la asig. de memoria.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;
	/*Verificar si las dimensiones son validas*/
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	/*Reservar memoria para las filas (array de punteros)*/
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			/*Liberar memoria ya reservada si falla*/
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
		/*Inicializar todos los valores de la fila en 0*/
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
