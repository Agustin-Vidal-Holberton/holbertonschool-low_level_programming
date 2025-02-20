#include<stdio.h>
/**
*main - principal funtion
*Return: return 0 if the program runs without problems
*/
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++) /*Loop through lowercase letters*/
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter); /*Prints the char letter in lowercase*/
		}
	}

	putchar('\n');

	return (0);
}
