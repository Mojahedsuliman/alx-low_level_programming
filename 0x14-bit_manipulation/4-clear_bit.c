#include "main.h"
#include <stdlib>

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: the number to delete
 * @index: the index of the bit
 *
 * Returns: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
		if (index > (sizeof(n) * 8)
		return (-1);
		*n &= ~(1 << index);
		return (1);
}
