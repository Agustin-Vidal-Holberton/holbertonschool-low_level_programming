#include "function_pointers.h"

/**
* int_index - Busca in entero en un array usando una funcion de comparacion.
* @array: El array de enteros.
* @size: Numero de elementos en el array.
* @cmp: Puntero a la funcion de comparacion.
* Return: indice del primer elemento para el cual cmp no devuelve 0,
* o -1 si no hay coincidencia o si size es menor o igual a 0.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
