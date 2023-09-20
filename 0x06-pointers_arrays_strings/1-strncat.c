#include "main.h"
/**
 * _strncat - concatenate two strings
 * using mostly n bytes from src
 * @dest: inp val
 * @src: inp val
 * @n: inp val
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, b;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	b = 0;
	while (b < n && src[b] != '\0')
	{
	dest[i] = src[b];
	i++;
	b++;
	}
	dest[i] = '\0';
	return (dest);
}

