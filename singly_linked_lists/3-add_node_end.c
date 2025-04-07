#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* _strlen - Calcula la longitud de una cadena
* @s: Cadena
* Return: longitud de la cadena
*/

unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (s[len])
	{
		len++;
	}

	return (len);
}

/**
 * add_node_end - Agrega un nuevo nodo al inicio de una lista list_t
 * @head: Doble puntero al inicio de la lista
 * @str: Cadena a duplicar y guardar en el nodo
 * Return: Direccion del nuevo nodo, o NULL si falla
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *nuevo, *temp;

	if (str == NULL)
		return (NULL);

	nuevo = malloc(sizeof(list_t));

	if (nuevo == NULL)
		return (NULL);

	nuevo->str = strdup(str);

	if (nuevo->str == NULL)
	{
		free(nuevo);
		return (NULL);
	}

	nuevo->len = _strlen(str);
	nuevo->next = NULL;

	if (*head == NULL)
		*head = nuevo;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nuevo;
	}

	return (nuevo);
}
