#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet in lower case
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int co = 0;
	char le;

	while (co++ <= 9)
	{
	for (le = 'a'; le <= 'z'; le++)
		_putchar(le);
	}
	_putchar('\n');
}
