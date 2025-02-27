#include "main.h"
/**
*puts_half - Prints the second half of a string.
*@str: Pointer to the string.
*/
void puts_half(char *str)
{
	int length = 0, n;

	while (str[length] != '\0') /*Encontrar la longitud de la cadena*/
	{
		length++;
	}
	if (length % 2 == 0)
	{
		n = length / 2; /*Si es par, empezamos desde la mitad*/
	}
	else
	{
		n = (length + 1) / 2; /*Si es impar, empezamos desde (length + 1) / 2 */
	}
	while (str[n] != '\0') /*Imprimir desde la posicion n hasta el final*/
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n'); /*Salto de linea al final */
}
