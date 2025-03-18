#include "function_pointers.h"

/**
* print_name - Imprime un nombre utilizando un puntero a funcion.
* @name: El nombre a imprimir.
* @f: Puntero a una funcion que recibe un char * y no retorna nada.
* Return: Nada,
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
