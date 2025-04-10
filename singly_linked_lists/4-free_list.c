#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Libera la memoria de una lista tipo list_t
 * @head: puntero al inicio de la lista
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
