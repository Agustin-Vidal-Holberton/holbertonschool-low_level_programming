#include "main.h"
/**
* _isupper - checks if a character is uppercase
* @c: The character to check(as an int, ASCII code)
* Return: 1 if c is uppercase, 0 otherwise.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z') /*Checks if it's between A and Z*/
	{
		return (1);
	}
	return (0);
}
