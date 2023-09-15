#include "main.h"
/**
 * _isupper - find uppercase alphabet
 *
 * @c: input character
 *
 * Return: (1) if true (0) otherwise false
 *
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
