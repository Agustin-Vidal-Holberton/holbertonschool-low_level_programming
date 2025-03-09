#include "main.h"
/**
 * _sqrt_helper - Función auxiliar para encontrar la raíz cuadrada.
 * @n: Número al que se le busca la raíz.
 * @guess: Valor de prueba para la raíz cuadrada.
 * Return: La raíz cuadrada de n o -1 si no tiene una exacta.
 */
int _sqrt_helper(int n, int guess)
{	
	/*Si el cuadrado supera n, no hay raiz exacta*/
	if (guess * guess > n)
	{
		return (-1);
	}
	/*Si el cuadrado es igual a n, encontramos la raiz*/
	if (guess * guess == n)
	{
		return (guess);
	}
	return (_sqrt_helper(n, guess + 1));/*Probar el siguiente numero*/
}

/**
* _sqrt_recursion - Encuentra la raiz cuadrada de un numero.
* @n: Numero al que se le busca la raiz cuadrada.
* Return: Raiz cuadrada de n o -1 si no tiene una exacta.
*/
int _sqrt_recursion(int n)
{
	if (n < 0) /*No hay raiz cuadrada natural para numeros negativos*/
	{
		return (-1);
	}
	/* Comenzamos la busqueda desde 0 */
	return (_sqrt_helper(n, 0));
}
