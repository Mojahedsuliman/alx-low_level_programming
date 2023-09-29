#include <unistd.h>

/**
 * My _putchar.c
 */
int _putchar(char c)
{
	return write(STOUT_FILE, &c, 1);
}
