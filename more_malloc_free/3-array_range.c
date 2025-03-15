#include "main.h"
#include <stdlib.h>
/**
* array_range - Crea un array de enteros con valores desde min a max.
* @min: Valor minimo.
* @max: Valor maximo.
* Return: Puntero al array o NULL si falla.
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
