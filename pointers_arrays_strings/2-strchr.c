#include "main.h"
/**
* _strchr - Ubica un caracter en una cadena de texto.
* @s: Puntero a la cadena de caracteres donde se buscara.
* @c: Caracter a buscar en la cadena.
* Return: Retorna un puntero a la primera aparicion de c en s,
* o NULL si el caracter no se encuentra.
*/
char *_strchr(char *s, char c)
{
	/*Recorre la cadena hasta encontrar el caracter o llegar al final*/
	while (*s != '\0')
	{
		if (*s == c) /*Si encontramoms el caracter, devolvemos direccion*/
		{
			return (s);
		}
	}
	/*Si c es '\0', devolvemos su posicion en la cadena*/
	if (*s == c)
	{
		return (s);
	}
	return (0);
}
