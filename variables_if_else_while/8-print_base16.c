#include<stdio.h>
/**
*main - principal funtion
*Return: return 0 if the program runs without problems
*/
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number); /*This will print digits 0-9*/
	}

	for (number = 'a'; number <= 'f'; number++)
	{
		putchar(number); /*This will print letters a-f*/
	}

	putchar('\n');

	return (0);
}
