#include "main.h"

/**
 * get_bit - a function that returns the value of a bit at a given index.
 * @n: the number to check
 * @index: the index of the bit
 *
 * Returns: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
		unsigned long int check, mask;

		if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
		check = n & mask;
		mask = 1 << index;
		if (check == mask)
			return (1);
		else
			return (0);
}
