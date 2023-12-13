#include "main.h"

/**
 * _strcat - concatenates two strings pointers
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the pointer to dest
*/
char *_strcat(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
		return (NULL);

	else
	{
		while (*dest != '\0')
		{
			dest++;
		}
		while (*src != '\0')
		{
			*dest = *src;
			dest++;
			src++;
		}
		*dest = '\0';
		return (dest);
	}
}
