#include <stdio.h>
/**
 * main - Entry point
 * Description: print all single digits combinations
 * Return: 0
 */
int main(void)
{
	int c;

	c = 0;
	while
		(c < 10) {
			putchar(48 + c);
			if
				(c != 9) {
					putchar(',');
					putchar(' ');
			}
	     c++;
}
putchar('\n');
return (0);
}
