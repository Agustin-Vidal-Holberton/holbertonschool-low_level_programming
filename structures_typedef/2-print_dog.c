#include "dog.h"
#include <stdio.h>
/**
* print_dog - Impreime los detalles de una estructura dog.
* @d: Puntero a la estructura dog.
* Descripcion: Si un miembro es NULL, imprime "(nil)" en su lugar.
* Si d es NULL, no importa nada.
*/
void print_dog(struct dog *d)
{
	char *name;
	char *owner;

	if (d == NULL)
	{
		return;
	}

	if (d->name != NULL)
	{
		name = d->name;
	}
	else
	{
		name = "(nil)";
	}

	if (d->owner != NULL)
	{
		owner = d->owner;
	}
	else
	{
		owner = "(nil)";
	}

	printf("Name: %s\n", name);
	printf("Age: %.1f\n", d->age);
	printf("Owner: %s\n", owner);
}
