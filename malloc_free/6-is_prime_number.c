#include "main.h"
/**
* check_prime - Función auxiliar que verifica si un número es primo.
* @n: Número a verificar.
* @div: Posible divisor de n.
* Return: 1 si es primo, 0 si no lo es.
*/
int check_prime(int n, int div)
{	/*Si div^2 es mayor que n, significa que no tiene divisores*/
	if (div * div > n)
	{
		return (1);
	}
	/*Si n es divisible por div, no es primo */
	if (n % div == 0)
	{
		return (0);
	}
	/*Probar con el siguiente numero */
	return (check_prime(n, div + 1));
}
/**
* is_prime_number - Determina si un número es primo.
* @n: Número a verificar.
* Return: 1 si es primo, 0 si no lo es.
*/
int is_prime_number(int n)
{
	if (n <= 1)/* 0 y 1 no son primos, y tampoco los negativos*/
	{
		return (0);
	}
	return (check_prime(n, 2));/*Iniciar la verificacion desde 2*/
}
