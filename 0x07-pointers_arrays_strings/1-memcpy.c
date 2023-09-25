#include "main.h"
/**
 * _memcpy - a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * *@n: number of bytes
 *
 * Return: copied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int f = 0;
	int k = n;

	for (; f < k; f++)
	{
		dest[f] = src[f];
		n--;
	}
	return (dest);
}

