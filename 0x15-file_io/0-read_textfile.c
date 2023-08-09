#include "main.h"

/**
 * read_textfile - Fnc that reads txt file and prints it to the STND_OUT
 * @filename: The source file
 * @letters: Number of letters to reads and prints
 *
 * Return: 0 on fail , readed characters on success.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int readed;
	int fd;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);
	return (readed);
}
