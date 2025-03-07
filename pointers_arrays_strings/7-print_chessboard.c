#include "main.h"
/**
*print_chessboard - Imprime un tablero de ajedrez de 8x8.
*@a: Matriz de caracteres que representa el tablero.
*Return: No retorna nada
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]); /*imprime cada casilla del tablero*/
		}
		_putchar('\n'); /*Salto de linea despues de cada fila*/
	}
}
