#include <stdio.h>
#include <stdlib.h>
/**
* main - Multiplies two number passed as arguments
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
* Return: 0 if successful, 1 if error occurs
*/
int main(int argc, char *argv[])
{
	int num1, num2;

	if (argc != 3) /*if the number of arguments is not exactle 3*/
	{
		printf("Error\n");
		return (1);
	}
	/*Convert arguments to integers and multiplay*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%d\n", num1 * num2);
	return (0);
}
