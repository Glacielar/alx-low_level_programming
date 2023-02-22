#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the int to extract the last digit
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;

	_putchar(ld + '0');

	return (0);
}
