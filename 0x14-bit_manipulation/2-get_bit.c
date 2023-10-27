#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: the number to check
 * @index: the index of the bit
 *
 * Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	return (-1);
	bit = (n >> index & 1);
	return (bit);
}
