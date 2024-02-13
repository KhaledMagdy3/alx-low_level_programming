#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it to
 *		the POSIX standard output and prints it to the POSIX standard output
 *
 * @filename: const char *
 * @letters: size_t ( number of letters it should read and print)
 *
 * Return: ssize_t
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd, wrt;
	char *txt;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
	{
		close(fd);
		return (0);
	}

	letters = read(fd, txt, letters);

	wrt = write(STDOUT_FILENO, txt, letters);
	if (wrt == -1)
	{
		close(fd);
		free(txt);
		return (0);
	}

	close(fd);
	free(txt);
	return (rd);
}
