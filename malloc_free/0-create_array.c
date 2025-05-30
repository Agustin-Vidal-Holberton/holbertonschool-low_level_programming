#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* create_array - Create an array of char and ini. it with a specific char.
* @size: The size of the array.
* @c: The character to ini. the array with.
* Return: Pointer to the array, or NULL if size=0 or malloc fails.
*/
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
