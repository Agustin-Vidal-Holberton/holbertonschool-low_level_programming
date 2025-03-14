#include "main.h"
#include <stdlib.h>
/**
* free_grid - Libera la memoria de una matriz bidimensional.
* @grid: Puntero a la matriz creada con alloc_grid.
* @height: Numero de filas de la matriz.
* Return: Nada (void).
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
	{
		return;
	}
	/*Libera cada fila de la matriz*/
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	/*Liberar el array de punteros*/
	free(grid);
}
