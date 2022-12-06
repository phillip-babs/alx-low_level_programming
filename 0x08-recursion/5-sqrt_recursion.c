#include "main.h"

/**
 * _sqrt_recursion -> A fuction that give the square root of a number
 * @n: the number
 * Return: reuslt of square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt -> recursive root
 * @n: number
 * @a: iterator
 * Return: a number
 */

int _sqrt(int n, int a)
{
	int square = a * a;

	if (square > n)
		return (-1);
	if (square == n)
		return (a);
	return (_sqrt(n, a + 1));
}
