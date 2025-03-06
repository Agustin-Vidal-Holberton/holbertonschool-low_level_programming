#include "main.h"
/**
*leet - Convierte una cadena en "leet" (1337).
*@str: Puntero a la cadena de caracteres.
*Return: Puntero a la cadena modificada.
*/
char *leet(char *str)
{
	int i, j;
	char letters[] = "aAeEoOtTlL"; /*Letras a reemplazar*/
	char numbers[] = "4433007711"; /*Valores en 1337*/

	for (i = 0; str[i] != '\0'; i++) /*Recorremos la cadena*/
	{
		for (j = 0; letters[j] != '\0'; j++) /*Comparamos con letras*/
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j]; /*Remplazamos por el num*/
				break;
			}
		}
	}
	return (str);
}
