#include "main.h"

/**
 * is_prime_number - function returns 1 if integer is prime number, otherwise 0
 * @n: the integer
 * Return: the result
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, 2));
}

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
