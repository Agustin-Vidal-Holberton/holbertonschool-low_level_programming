#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - Adds positive numbers
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 if successful, 1 if error occurs
*/
int main(int argc, char *argv[])
{
	int sum = 0;
	int i, j;

	/*Start from 1 to skip the program name*/
	for (i = 1; i < argc; i++)
	{
		/*checks if the argument is a valid number*/
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			/*Checks for non-digit characters*/
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		/*Add the number to the sum*/
		sum += atoi(argv[i]);
	}
	/*If no numbers were passed, print 0*/
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		printf("%d\n", sum);
	}
	return (0);
}
