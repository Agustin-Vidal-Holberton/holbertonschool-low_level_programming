#include "main.h"
#include <stdio.h>
/**
*print_diagsums- Imprime la suma de las dos diagonales de una matriz cuadrada.
*@a: Puntero a la matriz de enteros.
*@size: Tama√o de la matriz cuadrada(size x size).
*Return: No retorna nada
*/
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];/*Elementos de la diagonal principal*/
		sum2 += a[i * size + (size - 1 - i)];/*Elementos de la diagonal secundaria*/
	}
	printf("%d, %d\n", sum1, sum2);
}
