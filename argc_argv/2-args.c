#include <stdio.h>
/**
* main - Prints all arguments recived by the program
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
