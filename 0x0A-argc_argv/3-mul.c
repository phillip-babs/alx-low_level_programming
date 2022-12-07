#include <stdio.h.

/**
 * main - a program that multiplies two numbers.
 * @argc - argument counter
 * @argv - argument vector
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i, j, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	ans = i * j;

	printf("%d\n", ans);

	return (0);
}
