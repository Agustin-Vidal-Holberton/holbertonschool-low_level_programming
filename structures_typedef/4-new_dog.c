#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* new_dog - Crea un nuevo perro.
* @name: Nombre del perro.
* @age: Edad del perro.
* @owner: Nomre del dueÃo del perro±
* Return: Puntero a la nueva estructura dog_t, o NULL si falla
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (!dog)
	{
		return (NULL);
	}
	if (name)
	{
		dog->name = malloc(strlen(name) + 1);
		if (!dog->name)
		{
			return (free(dog), NULL);
		}
		strcpy(dog->name, name);
	}
	else
	{
		dog->name = NULL;
	}
	if (owner)
	{
		dog->owner = malloc(strlen(owner) + 1);
		if (!dog->owner)
		{
			return (free(dog->name), free(dog), NULL);
		}
		strcpy(dog->owner, owner);
	}
	else
	{
		dog->owner = NULL;
	}
	dog->age = age;
	return (dog);
}
