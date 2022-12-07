#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument counter
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);

}
