#include "main.h"
/**
* _strncpy - Copia una cadena de caracteres.
* @dest: Buffer donde se copiará la caden.
* @src: La cadena de origen.
* @n: Numeros maximos de caracteres a copiar.
* Return: Puntero a la cadena destino 'dest'.
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
