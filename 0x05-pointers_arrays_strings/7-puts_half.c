#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int a, o, longu;

	longu = 0;

	for (a = 0; str[a] != '\0'; a++)
		longu++;

	o = (longu / 2);

	if ((longu % 2) == 1)
		o = ((longu + 1) / 2);

	for (a = o; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}

