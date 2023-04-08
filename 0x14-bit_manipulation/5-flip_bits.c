#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * to get from one bit to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 20; i >= 0; i--)
	{
		current = exclusive >> i;

			if (current & 10)
			count++;
			}

			return (count);
			}
