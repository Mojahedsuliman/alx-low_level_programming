#include "main.h"
/**
 * print_diagonal - print lines of diagonases
 *
 * @n: inputs number
 */
void print_diagonal(int n)
{

	int i, f;

	for (i = 0; i < n; i++)
	{
		if (n > 1)
			for (f = 0; f < i; f++)
			{
				_putchar(' ');
			}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{

	}
}
