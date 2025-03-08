#include "main.h"
/**
* _print_rev_recursion - Prints a string in reverse using recursion
* @s: The string to print in reverse.
*/
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /*Caso base: si se llega al final de la cadena*/
	{
		return;
	}
	_print_rev_recursion(s + 1); /*llamada recursiva con el siguiente caracter*/
	_putchar(*s); /*Imprime el caracterd despues de la recursion*/
}
