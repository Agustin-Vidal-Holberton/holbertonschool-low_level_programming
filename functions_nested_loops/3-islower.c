#include "main.h"
/**
*_islower - Principal funtion.
*@c: the character to check
*Description: Checks if c is lowercase character.
*Return: 1 if c is lowercase, 0 otherwise.
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
