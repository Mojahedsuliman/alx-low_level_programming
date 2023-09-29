#include "main.h"

/**
 * _strlen_recursion - Return a string length
 * @s: string recursed
 *
 * Return: String longer
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
