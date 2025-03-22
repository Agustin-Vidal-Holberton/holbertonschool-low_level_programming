#include "function_pointers.h"

/**
* array_iterator - Ejecuta una funcion en cada elemento de un array.
* @array: El array de enteros.
* @size: El tama√o del array.
* @action: Puntero a la funcion que se ejecutara en cada elemento.
* Return: Nada.
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
