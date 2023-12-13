#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: the set of bytes to be searched for in s
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept
*/
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
