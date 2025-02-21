#include "main.h"
/**
*_isalpha - Principal funtion.
*@c: the character to check
*Description: Checks if c is alphabetic character.
*Return: 1 if c is lowercase or uppercase, 0 otherwise.
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c >= 'Z'))
	{
		return (1);
	}
	return (0);
}
