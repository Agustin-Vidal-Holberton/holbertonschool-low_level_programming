#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strcpy - Copia una cadena de origen a destino
 * @dest: Puntero al destino
 * @src: Puntero a la cadena de origen
 * Return: Puntero a destino
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * _strlen - Calcula la longitud de una cadena
 * @s: Cadena de caracteres
 * Return: Longitud de la cadena
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
* new_dog - Crea un nuevo perro.
* @name: Nombre del perro.
* @age: Edad del perro.
* @owner: Nomre del dueÃo del perro±
* Return: Puntero a la nueva estructura dog_t, o NULL si falla
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *name_copy, *owner_copy;
	int name_len, owner_len;

	dog = malloc(sizeof(dog_t));
	if (!dog)
	{
		return (NULL);
	}
	name_len = _strlen(name);
	owner_len = _strlen(owner);
	name_copy = malloc(name_len + 1);
	if (!name_copy)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(name_copy, name);
	owner_copy = malloc(owner_len + 1);
	if (!owner_copy)
	{
		free(name_copy);
		free(dog);
		return (NULL);
	}
	_strcpy(owner_copy, owner);
	dog->name = name_copy;
	dog->age = age;
	dog->owner = owner_copy;
	return (dog);
}
