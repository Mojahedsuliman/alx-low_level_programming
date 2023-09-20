#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: inp val
 * @src: inp val
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int i, x;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[i] = src[x];
		i++;
		x++;
	}

	dest[i] = '\0';
	return (dest);
}

