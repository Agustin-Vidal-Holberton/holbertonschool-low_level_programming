#include "main.h"
/**
*_strcpy - Copies the string pointer to by src, including the null byte.
*@dest: Pointer to the destination buffer.
*@src: Pointer to the source string.
*Return: Pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0'; /*Agrega el caracter nulo al final*/
	return (dest);
}
