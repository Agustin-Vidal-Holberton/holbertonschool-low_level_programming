#include<stdio.h>
/**
*main - principal funtion
*Return: return 0 if the program runs without problems
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter); /*Prints the char letter*/
	}

	putchar('\n');

	return (0);
}
