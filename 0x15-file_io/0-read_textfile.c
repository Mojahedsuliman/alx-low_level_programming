#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the POSIX standard o.p
 * @filename: name of the file will read
 * @letters: number of letters to be read
 *
 * Return: actual number of bytes read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
		int fd;
		ssize_t bytes_read, bytes_written;
		char *bufer;

		fd = open(filename, O_RDONLY);
		if (fd == -1)
		return (0);

		bufer = malloc(sizeof(char) * letters);
		if (bufer == NULL)
		return (0);

		bytes_read = read(fd, bufer, letters);
		bytes_written = write(STDOUT_FILENO, bufer, bytes_read);
		close(fd);
		free(bufer);

		return (bytes_written);
}
