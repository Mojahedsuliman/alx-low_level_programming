#include "main.h"
/**
 * print_number - print from 0 to 9
 * exp 2 and 4
 */
void print_most_numbers(void)
{
	int nu;

	for (nu = 0; nu <= 9; nu++)
	{
		if (nu != 2 && nu != 4)
		{
			_putchar(nu + '0');
		}
	}
	_putchar('\n');
}
