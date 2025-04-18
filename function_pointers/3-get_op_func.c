#include "3-calc.h"

/**
* get_op_func - Selecciona la funcion correcta para la operacion.
* @s: Operador en formato de cadena de caracteres.
* Return: Puntero a la funcion que corresponde al operador.
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && *ops[i].op != *s)
	{
		i++;
	}
	return (ops[i].f);
}
