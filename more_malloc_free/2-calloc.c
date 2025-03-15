#include "main.h"
#include <stdlib.h>
/**
* _calloc - Asigna memoria para un array de nmemb elementos de tama√o size.
* @nmemb: Numero de elementos.
* @size: Tama√o en bytes de cada elemento.
* Return: Puntero a la memoria asignada o NULL si falla.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/*Inicializamos la memoria en 0 manualmente*/
	for (i = 0; i < (nmemb * size); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
