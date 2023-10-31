#include "main.h"

/**
 * append_text_to_file -  a function that appends text at the end of a file.
 * @filename: name of the file to append
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success -1 on failure or if filename is NULL
*/
int append_text_to_file(const char *filename, char *text_content)
{
		int fd, w;

		if (filename == NULL)
		return (-1);

		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		return (-1);

		if (text_content)
		{
				for (w = 0; &text_content[w]; w++)

				write(fd, &text_content[w], 1);
		}

		close(fd);
		return (1);
}
