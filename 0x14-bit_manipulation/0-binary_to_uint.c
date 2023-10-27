#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: the binary number to convert
 *
 * Return: the converted number, or 0 if not
 */
unsigned int binary_to_uint(const char *b)
{
		unsigned int n = 0;

		if (!b)
		return (0);
		for (n = 0; b[n] != '\0'; n++)
		{
			if (b[n] != '0' && b[n] != '1')
			return (0);
			}
		for (n = 0; b[n] != '\0'; n++)
		{
			n <<= 1;
			if (b[n] == '1')
			n += 1;
		}
		return (n);
}
