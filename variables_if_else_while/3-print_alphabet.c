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
		putchar(letter); /*Prints the char letter in lowercase*/
	}

	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter); /*Prints the char letter in uppercase*/
	}

	putchar('\n');

	return (0);
}
