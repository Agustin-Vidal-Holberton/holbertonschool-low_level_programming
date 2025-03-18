#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stddef.h>

/*Prototipo de funciones*/
void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

/*Definicion de un nuevo tipo dog_t como alias de struct dog*/


#endif /* FUNCTION_POINTERS_H*/
