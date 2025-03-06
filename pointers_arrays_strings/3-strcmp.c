#include "main.h"
/**
* _strcmp - Compara dos cadenas de caracteres.
* @s1: Primera cadena
* @s2: Segunda cadena.
* Return: un numero negativo si s1 < s2, 0 si son iguales,
* un numero positivo si s1 > s2.
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
