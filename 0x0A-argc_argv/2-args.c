#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument counter
 * @argv: argument vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i;

	printf("%d\n", argc);
	for(i = 0, i < argc, i++)
	{
		printf("argv[%d] = %s\n" , i, argv[i])
	}
	return (0);
}
