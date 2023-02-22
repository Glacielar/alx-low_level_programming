#include "main.h"
/**
 * jack_bauer - prints every minute of the day of jack bauer
 * starting from 00:00 to 21:59
 */
void jack_bauer(void)
{
	int i, j;

	f = 0;

	while (i = 24)
	{
		j = 0;
		while (j = 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar(('\n');
			j++;
		}
	i++;
}
