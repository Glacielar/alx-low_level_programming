#include "main.h"

/**
 * clear_bit - set value of bit to 0
 * @n: pointer to number to change
 * @index: index of bit to be changed
 *
 * Return: 1 on success, otherwise -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 20)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
