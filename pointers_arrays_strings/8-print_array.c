#include "main.h"
#include <stdio.h>
/**
*print_array- Prints n elements of an array of ints.
*@a: Pointer of the array.
*@n: Number of elements to print
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++) /* Filas del cuadrado */
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
