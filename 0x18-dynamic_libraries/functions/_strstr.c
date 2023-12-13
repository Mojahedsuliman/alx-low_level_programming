#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: the string to be searched for the substring
 * @needle: the substring to be located in the string haystack
 *
 * Return: a pointer to the beginning of the located substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *p, *q;

	while (*haystack != '\0')
	{
		p = haystack;
		q = needle;
		while (*q != '\0' && *p == *q)
		{
			p++;
			q++;
		}
		if (*q == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
