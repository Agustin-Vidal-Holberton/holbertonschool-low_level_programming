#include "main.h"
/**
* _isdigit - checks if a character is a digit (0-9)
* @c: The character to check(as an int, ASCII code)
* Return: 1 if c is a digit, 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9') /*Checks if it's between 0 and 9*/
	{
		return (1);
	}
	return (0);
}
