#include "main.h"
#include <stdio.h>
/**
*print_to_98 - Principal funtion.
*@n: The starting number
*Description: Prints numbers from n to 98, separated by ", ".
*Return: All natural numbers from n to 98.
*/
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("98\n");
}
