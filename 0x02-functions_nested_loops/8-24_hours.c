#include "holberton.h"
/**
 *time - evaluate lower letter
 *@hour: for identify hour
 *@aux_hour: auxiliar for hour
 *Description: this function prints time in format 00:00
 *Return: Nothing
 */
void time(int hour, int aux_hour)
{
	int min = 0;
	int i, aux_min;

	for (i = 0; i < 6; i++)
	{
		for (aux_min = 0; aux_min < 10; aux_min++)
		{
			_putchar(hour + '0');
			_putchar(aux_hour + '0');
			_putchar(':');
			_putchar(min + '0');
			_putchar(aux_min + '0');
			_putchar('\n');
		}
		min++;
	}
}
/**
 *jack_bauer - print time
 *Description: manage function time loop for format 24 hours
 *Return: Nothing
 */
void jack_bauer(void)
{
	int i, j;
	int aux = 0;
	int n = 10;

	for (i = 0; i <= 2; i++)
	{
		if (i == 2)
		{
			n = 4;
		}
		for (j = 0; j < n; j++)
		{
			time(aux, j);
		}
	aux++;
	}
}
