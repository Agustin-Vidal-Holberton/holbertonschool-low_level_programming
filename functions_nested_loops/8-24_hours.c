#include "main.h"
/**
*jack_bauer - Principal funtion.
*Description: Prints from 00:00 to 23:59, one per line.
*Return: Every minutes of the day.
*/
void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++) /*Repeat from 0 to 23*/
	{
		for (minute = 0; minute < 60; minute++) /*Repeat from 0 to 60*/
		{
			_putchar((hour / 10) + '0'); /*Print the tenth of the hour*/
			_putchar((hour % 10) + '0'); /*Print the unit of hour*/
			_putchar(':');
			_putchar((minute / 10) + '0'); /*Print the tenth of the minute*/
			_putchar((minute % 10) + '0'); /*Print the unit of minute*/
			_putchar('\n');
		}
	}
}
