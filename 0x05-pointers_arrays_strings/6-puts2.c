#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int longu = 0;
	int f = 0;
	char *u = str;
	int e;

	while (*f != '\0')
	{
		u++;
		longu++;
	}
	f = longu - 1;
	for (e = 0 ; e <= f ; e++)
	{
		if (e % 2 == 0)
	{
		_putchar(str[e]);
	}
	}
	_putchar('\n');
}

