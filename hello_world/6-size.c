#include<stdio.h>
/**
*main - principal funtion
*Return: return 0 if the program runs without problems
*/
int main(void)
{
	/*printf will print the size of varios types*/
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long int: %zu bytes(s)\n", sizeof(long));
	printf("Size of long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
