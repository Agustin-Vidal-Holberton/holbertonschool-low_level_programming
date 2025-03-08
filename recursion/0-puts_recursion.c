#include "main.h"
/**
*_puts_recursion - Prints a string followed by a new line using recursion.
*@s: The string to print.
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')/*Caso base: si la cadena llega al final*/
	{
		_putchar('\n');/*Imprime un salto de linea*/
		return;
	}
	_putchar(*s); /*Imprime el primer caracter*/
	_puts_recursion(s + 1); /*Llamada recursiva con el siguiente caracter*/
}
