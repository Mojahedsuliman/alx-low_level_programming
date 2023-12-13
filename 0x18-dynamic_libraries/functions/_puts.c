#include "main.h"

/**
 * _puts - prints a string to stdout using _putchar function
 * @s: the string to be printed to stdout
 *
 * Return: void
*/
void _puts(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
