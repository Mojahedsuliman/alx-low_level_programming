#include "main.h"
/**
 * reverse_array - reverse integers array
 * @a: array
 * @n: number of arr
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x;
	int v;

	for (x = 0; x < n--; x++)
	{
		v = a[x];
		a[x] = a[n];
		a[n] = v;
	}
}

