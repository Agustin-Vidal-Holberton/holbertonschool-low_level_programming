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
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name: "(nil)");
	printf("Age: %.6f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
