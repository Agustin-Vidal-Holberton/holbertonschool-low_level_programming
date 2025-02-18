#include<stdio.h>
#include<time.h>
#include<stdlib.h>
/**
*main - principal funtion
*Return: return 0 if the program runs without problems
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);

}
