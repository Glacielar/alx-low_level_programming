#include "main.h"

/**
 * set_bit - sets bit at a given index to 1
 * @n: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 on successs, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 20)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
