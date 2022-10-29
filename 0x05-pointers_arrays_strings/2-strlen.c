#include "main.h"

/**
 * _strlen - a function that returns the lenght of a string
 * @s: string
 * Return: length
 */

int_strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
