#include "main.h"
/**
 * print_new_recursion - print a string
 * @s: string that will print
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
