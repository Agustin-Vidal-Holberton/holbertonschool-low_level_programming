#include "main.h"
#include <stdlib.h>
/**
* str_concat - Concatena dos cadenas en una nueva mem asig dinamicamente.
* @s1: Primera cadena.
* @s2: Segunda cadena.
* Return: Puntero a la nueva cadena, o NULL si falla la asignacion.
*/
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int i, j, len1 = 0, len2 = 0, total_len;
	/*Si s1 es NULL, tratarlo como una cadena vacia*/
	if (s1 != NULL)
	{
		while (s1[len1] != '\0')
		{
			len1++;
		}
	}
	/*Si s2 es NULL, tratarlo como una cadena vacia*/
	if (s2 != NULL)
	{
		while (s2[len2] != '\0')
		{
			len2++;
		}
	}
	/*calcula la longitud total y reserva memoria*/
	total_len = len1 + len2;
	concat = malloc(sizeof(char) * (total_len + 1));

	if (concat == NULL)
	{
		return (NULL);
	}
	/*Copiar la prinera cadena a la memoria nueva*/
	for (i = 0; i < len1; i++)
	{
		concat[i] = s1[i];
	}
	/*Copiar la segunda cadena a la memoria nueva*/
	for (j = 0; j < len2; j++)
	{
		concat[len1 + j] = s2[j];
	}
	/*Agregar el caracter nulo al final*/
	concat[total_len] = '\0';

	return (concat);
}
