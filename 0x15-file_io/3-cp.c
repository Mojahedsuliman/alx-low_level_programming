#include "main.h"
#include <stdio.h>

/**
 * check_error - check if error
 * @fd: file descriptor
 * @filename: file name
 * @letters: number of letters
 *
 * Return: void
 */
void check_error(int fd, char *filename, int letters)
{
		if (fd == -1)
		printf("Error: Can't read from file %s\n", filename);
		exit(98);
		if (letters == -1)
		printf("Error: Can't write to %d\n", fd);
		exit(99);
		if (close(fd) == -1)
		printf("Error: Can't close fd %d\n", fd);

		return;
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
		int fd_from, fd_to, letters;
		char *filename, *bufer;

		if (argc != 3)
		printf("Usage: cp file_from file_to\n");
		exit(97);

		filename = argv[1];
		fd_from = open(filename, O_RDONLY);

		filename = argv[2];
		fd_to = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

		check_error(fd_from, filename, letters);

		bufer = malloc(sizeof(char) * letters);
		check_error(fd_to, filename, letters);

		letters = read(fd_from, bufer, letters);
		letters = write(fd_to, bufer, letters);

		free(bufer);
		check_error(fd_from, filename, letters);
		check_error(fd_to, filename, letters);
		close(fd_from);
		close(fd_to);
		return (0);
}
