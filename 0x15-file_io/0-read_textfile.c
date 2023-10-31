#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard out
 * @filename: name of the file will read
 * @letters: number of letters to be read
 *
 * Return: actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nr, nw;
	char *buf;
	int fd;

	if (filename == NULL)
	return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	nw = write(STDOUT_FILENO, buf, nr);
	if (nw == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	nr = read(fd, buf, letters);
	if (nr == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (nw);
}

