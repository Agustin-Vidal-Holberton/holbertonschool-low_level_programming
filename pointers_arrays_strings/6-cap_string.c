#include "main.h"
/**
*cap_string - Capitaliza todas las palabras de una cadena.
*@str: Puntero a la cadena de caracteres.
*Return: Puntero a la cadena modificada.
*/
char *cap_string(char *str)
{
	int i = 0;
	int j;
	int capitalize = 1;/*Bandera para indicar si hay que capitalizar*/
	char separators[] = " \t\n,;.!?\"(){}"; /*caracteres separadores*/

	while (str[i] != '\0')
	{
		if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32; /*convertimos la minuscula a mayuscula*/
		}
		capitalize = 0; /*Por defecto, no capitalizar el siguiente*/
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				capitalize = 1; /*Proximo hay que capitalizar*/
				break;
			}
		}
		i++;
	}
	return (str);
}
