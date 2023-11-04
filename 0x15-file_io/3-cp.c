#include "main.h"
#include <stdio.h>

/**
 * error_file - a function that check file can be opened
 * @file_from: file from
 * @file_to: file to
 * @argv: the vector of arguments
 *
 * Return: 0
*/
void error_file(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - a function that copies the content of a file to another
 * @argv: the vector of arguments
 * @args: the number of arguments
 *
 * Return: 0
*/
int main(int args, char *argv[])
{
int file_from;
int error_close;
int file_to;
ssize_t w, r;
char bufer[1024];

if (args != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}

file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
error_file(file_from, file_to, argv);

w = 1024;
while (w == 1024)
{
w = read(file_from, bufer, 1024);
if (w == -1)
		error_file(-1, 0, argv);
r = write(file_to, bufer, w);
if (r == -1)
error_file(0, -1, argv);
}

error_close = close(file_from);
if (error_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}

error_close = close(file_to);
if (error_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}
