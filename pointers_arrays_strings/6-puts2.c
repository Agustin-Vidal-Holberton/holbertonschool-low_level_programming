#include "main.h"
/**
*puts2 - Prints every other character of a string, starting with the first.
*@str: Pointer to the string.
*/
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0' && i < 448) /*Recorramos la cadena*/
	{
		_putchar(str[i]); /*Imprimio el caracter en la posicion actual*/
		i += 2; /*Saltamos un caracter*/
	}
	_putchar('\n');
}
