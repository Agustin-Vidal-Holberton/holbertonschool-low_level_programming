#include<stdio.h>
/**
*main - principal funtion
*Return: return 0 if the program runs without problems
*/
int main(void)
{
	int number;

	for (number = 0; number <= 9; number++)
	{
		putchar(number + '0'); /*This will print digits*/

		if (number < 9) /*This check if it's not the last digit*/
		{
			putchar(','); /*This prints the comma*/
			putchar(' '); /*This will print the space*/
		}
	}

	putchar('\n'); /*This prints mew line*/

	return (0);
}
