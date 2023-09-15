#include "main.h"
/**
 * _isdigit - check para digit or char
 *
 * @c: para
 * Return: 1 if number 0 orthers
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
