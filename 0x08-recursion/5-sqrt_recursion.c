#include "main.h"
#include <stdio.h>


int _sqrt(int n, int i);
/**
 * _sqrt_recursion - Return the natural square
 * @n: number to calculate
 *
 * Return: the natural root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * _sqrt - calculate square root
 * @n: number to calculate
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
