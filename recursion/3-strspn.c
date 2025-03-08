#include "main.h"
/**
* _strspn - Obtiene long. prefijo de una cadena que solo contien ciertos carac.
* @s: Cadena principal en la que se buscara el prefijo.
* @accept: Cadena con los caracteres permitidos en el prefijo.
* Return: Numero de bytes en la parte ini de s que solo cont carac de accept.
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	int match;
	/*Recorremos la cadena*/
	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		/*Verificamos si el caracter actual de s esta en accept*/
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		/*Si no encontramos coincidencia, terminamos el conteo*/
		if (match == 0)
		{
			return (i);
		}
	}
	return (i);
}
