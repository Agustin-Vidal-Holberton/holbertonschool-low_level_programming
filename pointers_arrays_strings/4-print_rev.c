#include "main.h"
/**
* print_rev - Print string in reverse
* @s: Pointer to the string
*/
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0') /*Encontramos la longitud de la cadena*/
	{
		length++;
	}
	while (length > 0) /*Recorremos la cadena en reversa*/
	{
		_putchar(s[length - 1]);
		length--;
	}
	_putchar('\n'); /*Imprimimos un salto de linea al final*/
}
