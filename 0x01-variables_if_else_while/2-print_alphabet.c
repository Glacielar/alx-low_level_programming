#include <stdio.h>
/**
 * main - Entry point
 * Description: print alphabet in lowercase
 * Return: 0
 */
int main(void)
{
	char c;

	c = 'a';
	while (c <= 'a')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
return (0);
}
