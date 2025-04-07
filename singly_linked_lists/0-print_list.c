#include <stdio.h>
#include "lists.h"

/**
* print_list - Imprime todos los elementos de una lista tipo list_t
* @h: Puntero al primer nodo de la lista
* Return: Numero total de nodos en la lista
*/
size_t print_list(const list_t *h)
{
	size_t contador = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		contador++;
	}

	return (contador);
}
