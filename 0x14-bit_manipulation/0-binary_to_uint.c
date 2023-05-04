#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @a: string containing the binary number
 *
 * Return: converted number
 */

unsigned int binary_to_uint(const char *a)
{
	int x;
	unsigned int dec_value = 0;

	if (!a)
		return (0);

	for (x = 0; a[x]; x++)
	{
		if (a[x] < '0' || a[x] > '1')
			return (0);
		dec_value = 2 * dec_value + (a[x] - '0');
	}

	return (dec_value);
}

