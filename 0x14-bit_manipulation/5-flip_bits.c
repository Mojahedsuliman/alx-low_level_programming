#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * @n: the first number
 * @m: the second number
 *
 * Return:  the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i = 0;
	int count = 0;
	unsigned long int xor = n ^ m;
	unsigned long int bit;

	for (i = 63; i >= 0; i--)
	{
	bit = xor >> i;
	if (bit & 1)
	count++;
	}
	return (count);
}
