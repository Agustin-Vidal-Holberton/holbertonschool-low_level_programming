#include "main.h"
#include <stddef.h>
/**
* _strpbrk - Busca la primera aparicion de cualquier byte de accept en s.
* @s: Cadena en la que se buscaran los bytes.
* @accept: Conjunto de bytes a buscar en s.
* Return: un puntero al primer byte en s que coincide con un byte en accept,
* o NULL si no se encuentra ninguna coincidencia.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	/*Recorremos la cadena s*/
	for (i = 0; s[i] != '\0'; i++)
	{
		/*Comparamos con cada caracter de accept*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);/*Retorna la direccion de la coincidencia*/
			}
		}
	}
	return (NULL);/*Si no se encontro coincidencia, retorna NULL*/
}
