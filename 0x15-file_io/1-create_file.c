#include "main.h"

/**
 * create_file - function that creates a file
 *
 * @filename: const char *
 * @text_content: char *
 *
 * Return: int
*/

int create_file(const char *filename, char *text_content)
{
	int fd, wrt;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_TRUNC | O_CREAT, 600)
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		wrt = write(fd, text_content, strlen(text_content));
		if (wrt == -1 || wrt == 0)
			return (-1);
	}

	close(fd);
	return (1);
}
