#include "dog.h"
#include <stddef.h>
/**
* init_dog - Inicializa una variable de tipo struct dog.
* @d: Puntero a struct dog a inicializar.
* @name: Nombre del perro.
* @age: Edad del perro.
* @owner: DueÃo del perro±
* Descripcion: si d es NULL, inicializa sus miembros.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
