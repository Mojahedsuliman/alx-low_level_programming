#include "main.h"

/**
 * set_bit -  a function that sets the value of a bit to 1 at a given index.
 * @n: the number to check
 * @index: the index of the bit
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
			unsigned long int putbit;

			if (index > (sizeof(unsigned long int) * 8 - 1))
			return (-1);
			putbit = 1 << index;
			*n |= putbit;
			return (1);
}
