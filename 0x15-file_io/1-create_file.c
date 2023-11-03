#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success -1 on failure or if filename is NULL
*/
int create_file(const char *filename, char *text_content)
{
		int fd, n, w;

		if (filename == NULL)
		return (-1);

		fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC);

		if (fd == -1)
		return (-1);

		if (text_content)
		{
			for (n = 0; text_content[n]; n++)
			{
					w = write(fd, text_content, n);

				if (w == -1)
				return (-1);
			}
		}

		close(fd)

		return (1);
}
