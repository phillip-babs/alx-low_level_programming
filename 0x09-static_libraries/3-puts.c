#include "main.h"


/**
 * _puts - print a string, followed by a new line, to stdout
 * @str: string
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
