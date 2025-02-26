#include <stdio.h>
/**
*main - Prints numbers from 1 to 100 with FizzBuzz rules.
*Return: Always 0 (success).
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0) /* Multiplo de 3 y de 5 */
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0) /* Multiplo de 3 */
		{
			printf("Fizz");
		}
		else if (i % 5 == 0) /* Multiplo de 5 */
		{
			printf("Buzz");
		}
		else /* cualquier otro numero */
		{
			printf("%d", i);
		}
		if (i < 100)/*Imprime espacio despues de cada palabra/numero sin el ultimo*/
		{
			printf(" ");
		}
	}
	printf("\n"); /* Nueva linea al final*/
	return (0);
}
