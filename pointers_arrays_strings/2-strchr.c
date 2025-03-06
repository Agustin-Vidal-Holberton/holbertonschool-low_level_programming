#include "main.h"
/**
* _strchr - busca la primera aparicion de un caracter en una cadena.
* @s: Puntero a la cadena de caracteres donde se buscara.
* @c: Caracter a buscar en la cadena.
* Return: Retorna un puntero a la primera aparicion de c en s,
* o NULL si no se encuentra.
*/
char *_strchr(char *s, char c)
{
	int i;
	/*Recorre la cadena hasta encontrar el caracter o llegar al final*/
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c) /*Si encontramoms el caracter, devolvemos direccion*/
		{
			return (s + i);
		}
	}
	/*Si el caracter buscado es '\0', devolvemos su direccion en la cadena*/
	if (s[i] == c)
	{
		return (s + i);
	}
	return (0);/*Si no encontramos el caracter, retornamos NULL*/
}
