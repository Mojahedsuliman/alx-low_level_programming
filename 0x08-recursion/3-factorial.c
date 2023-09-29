#include "main.h"

/**
 * factorial - calculateing numbers
 * @n: number to th factorial calculator
 *
 * Return: integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
