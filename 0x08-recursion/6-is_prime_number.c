#include "main.h"

/**
 * check_prime - finds the prime number
 * @n: the number to be checked
 * @a: iterator
 * Return: the result
 */

int check_prime(int n, int a)
{
	if (n == a)
		return (1);
	if (n % a == 0)
		return (0);
	return (check_prime(n, a + 1));
}

/**
 * is_prime_number - returns 1 if the input is a prime number
 * otherwise return 0
 * @n: the number to be checked
 * Return: the result
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, a));
}
