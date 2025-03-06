#include "main.h"
/**
*_memset - Llena un bloque de memoria con un valor constante.
*@s: Puntero al bloque de momoria a llenar.
*@b: Valor constante a escribir en la memoria.
*@n: Numero de bytes a llenar con el valor constante.
*Return: Retorna un puntero al area de memoria s.
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /*Variable para recorrer los bytes*/

	/*Recorremos los primeros n bytes de s y los llenamos con b*/
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);/*Retorna el puntero a la memoria modificada*/
}
