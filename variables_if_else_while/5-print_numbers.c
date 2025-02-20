#include<stdio.h>
/**
*main - principal funtion
*Return: return 0 if the program runs without problems
*/
int main(void)
{
	int number;

	while (number < 10)
	{
		printf("%d", number);
		number++;
	}

	putchar('\n');

	return (0);
}
