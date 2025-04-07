#include "lists.h"

/**
* list_len - Cuenta la cantidad de nodos en una lista tipo list_t
* @h: Puntero al primer nodo de la lista
* Return: Numero de nodos en la lista
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
