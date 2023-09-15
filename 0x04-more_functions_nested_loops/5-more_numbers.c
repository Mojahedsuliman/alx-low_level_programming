#include "main.h"
/**
 * morenumber - print 0 to 14 ten times
 *
 */
void more_numbers(void)
{
	int i, f;

	for (i = 0; i <= 9; i++)
	{
		for (f = 0; f <= 14; f++)
		{
			if (f >= 10)
			{
				_putchar((f / 10) + '0');
						}
						_putchar((f % 10) + '0');
		}
		_putchar('\n');
	}
}
