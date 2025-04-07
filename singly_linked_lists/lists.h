#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>

/**
* struct list_s - estructura de nodo para lista enlazada
* @str: string (reservado con malloc)
* @len: longitud del string
* @next: puntero al siguiente nodo
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
unsigned int _strlen(const char *s);
list_t *add_node_end(list_t **head, const char *str);

#endif /* LISTS_H */
