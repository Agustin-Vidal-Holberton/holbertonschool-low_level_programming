#include "main.h"
#include <stddef.h>
/**
* _strstr - Encuentra la primera aparicion de la subcadena needle en haystack.
* @haystack: Cadena principal donde se buscara la subcadena.
* @needle: Subcadena a buscar en haystack.
* Return: Puntero al inicio de la subcadena encontrada,
* o NULL si no se encuentra.
*/
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')/*Si needle es una cadena vacia, retorna haystack*/
	{
		return (haystack);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		/*Verifica si la subcadena comienza en esta posicion*/
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
		/*Si recorrio toda needle, encontramos la subcadena*/
		if (needle[j] == '\0')
		{
			return (haystack + i);
		}
	}
	return (NULL);/*No se encontro la subcadena*/
}
