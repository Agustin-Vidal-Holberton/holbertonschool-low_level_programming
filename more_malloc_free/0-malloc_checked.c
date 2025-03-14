#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - Asigna memoria usando malloc.
* @b: Cantidad de bytes a asignar.
* Return: Puntero a la memoria asignada,
* si malloc falla, el proceso termina con estado 98.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;
	/*Intentamos asignar memoria*/
	ptr = malloc(b);

	if (ptr == NULL) /*Si malloc falla*/
	{
		exit(98); /*Terminamos el proceso con el codigo de salida 98*/
	}
	return (ptr); /*Retornamos el puntero a la memoria asignada*/
}
