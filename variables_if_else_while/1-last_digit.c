#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
*main - principal funtion
*Return: return 0 if the program runs without problems
*/
int main(void)
{
	int n, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*This get the last digit*/
	last_digit = n % 10;

	/*Prints the required output*/
	printf("Last digit of %d is %d", n, last_digit);

	if (last_digit > 5)
	{
		printf(" and is greater than 5\n");
	}
	if (last_digit == 0)
	{
		printf(" and is 0\n");
	}
	if (last_digit < 6 && n != 0)
	{
		printf(" and is less than 6 and not 0\n");
	}

	return (0);
}
