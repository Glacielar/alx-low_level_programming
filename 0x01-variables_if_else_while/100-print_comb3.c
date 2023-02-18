#include <stdio.h>
/**
 * main - entry point
 * Description: print all possible combination of two single digits
 * Return: 0
 */
int main(void)
{
	int c;
	int d;

	d = 0;
	while
		(d < 10) {

			c = 0;
			while
				(c < 10) {
					if
						(d != c && d < c) {
							putchar('0' + d);
							putchar('0' + c);

							if
								(c + d != 17) {
									putchar(',');
									putchar(' ');
								}
						}
					c++;
				}
			c++;

		}
	putchar('\n');
	return (0);
}
