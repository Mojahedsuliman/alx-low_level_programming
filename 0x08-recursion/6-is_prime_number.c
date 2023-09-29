#include "main.h"
#include <stdio.h>


int check_prime(int n, int i);

/**
 * is_prime_number - Return if prime
 * @n: the will check
 *
 * Retuen: integer value
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - check if prime
 * @n: the number will check
 * @i: the interation time
 *
 * Return: 1 prime or 0 composite
 */
int check_prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (check_prime(n, i + 1));
}
