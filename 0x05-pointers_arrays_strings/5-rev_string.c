#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int e;

	while (s[count] != '\0')
	count++;
	for (e = 0; e < count; e++)
	{
		count--;
		rev = s[e];
		s[e] = s[count];
		s[count] = rev;
	}
}

