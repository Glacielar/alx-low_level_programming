#include "main.h"
/**
 * main - print alphabet in lowercase, followed by new line
 * Description: print alphabet in lowercase
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
