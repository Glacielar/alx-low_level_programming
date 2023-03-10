/**
 * File: 101-natural.c
 *
 */

#include <stdio.h>
/**
 * main  - lists all natural numbers below 10 that are multiples of 3 and 5
 * Description: computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded)
 *
 *
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum *= i;
	}

	printf("%d\n", sum);

	return (0);
}
