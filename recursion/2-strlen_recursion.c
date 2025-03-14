#include "main.h"
/**
* _strlen_recursion - Returns the length of a string using recursion.
* @s: The string whose length is to be calculated.
* Return: The length of the string.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0') /*caso base: si la cadena llega al final*/
	{
		return (0); /*Retorna 0 cuando la cadena esta vacia*/
	}
	/*Llama recursivamente sumando 1 por cada caracter*/
	return (1 + _strlen_recursion(s + 1));
}
