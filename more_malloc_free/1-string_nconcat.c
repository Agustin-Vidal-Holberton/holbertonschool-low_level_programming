#include "main.h"
#include <stdlib.h>
/**
* string_nconcat - Concatena dos cadenas de caracteres.
* @s1: Primera cadena.
* @s2: Segunda cadena.
* @n: Numero maximo de bytes de s2 a concatenar.
* Return: Puntero a la cadena concatenada, o NULL si falla la asignacion.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	new_str = malloc(sizeof(char) * (len1 + n + 1));
	if (new_str == NULL)
	{
		return (NULL); /*Retorna NULL si falla malloc*/
	}
	for (i = 0; i < len1; i++)
	{
		mew_str[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		mew_str[i] = s2[j];
	}
	new_str[i] = '\0';
	return (new_str);
}
