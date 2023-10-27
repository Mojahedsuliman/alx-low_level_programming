#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: the binary number to convert
 *
 * Return: the converted number, or 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;

	if (b == NULL)
	return (0);
	for (i = 0; b[i]; i++)
	{
	if (b[i] != '0' && b[i] != '1')
	return (0);
	if (b[i] == '1')
	number = number + (1 << i);
	}
	return (number);
}
