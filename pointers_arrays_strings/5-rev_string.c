#include "main.h"
/**
*rev_string - Reverses a string in place
*@s: Pointer to the string.
*/
void rev_string(char *s)
{
	int length = 0, i;
	char temp;

	while (s[length] != '\0') /*Encontramos la longitud de la cadena*/
	{
		length++;
	}
	for (i = 0; i < length / 2; i++) /*Intercambiamos caracteres*/
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
