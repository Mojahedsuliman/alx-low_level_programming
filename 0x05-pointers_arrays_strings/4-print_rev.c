#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int longu = 0;
	int i;

	while (*s != '\0')
	{
		longu++;
		s++;
	}
	s--;
	for (i = longu; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

