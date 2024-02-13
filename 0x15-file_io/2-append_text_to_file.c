#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 *
 * @filename: const char *
 * @text_content: char *
 *
 * Return: int
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wrt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wrt = write(filename, text_content, sizeof(text_content));
		if (wrt == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
