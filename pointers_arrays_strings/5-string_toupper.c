#include "main.h"
/**
* string_toupper - Convierte todas las letras min. de una cadena a may.
* @str: Puntero a la cadena de caracteres.
* Return: Puntero a la cadena modificada.
*/
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z') /*Si es una minuscula*/
		{
			str[i] = str[i] - 32; /*Convertir a mayuscula restando 32*/
		}
	}
	return (str);
}
