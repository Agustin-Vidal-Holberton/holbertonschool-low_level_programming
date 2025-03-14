#include "main.h"
#include <stdlib.h>
/**
* _strdup - Duplicates a string in a newly allocated memory space.
* @str: The original string to duplicate.
* Return: Pointer to the dupli. string, or NULL if str is NULL or malloc fails.
*/
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	/*Calcula el largo de str*/
	while (str[len] != '\0')
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}

	dup[len] = '\0';

	return (dup);
}
