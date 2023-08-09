#include "main.h"

/**
 *
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int readed;
	FILE fd;
	char *buff;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1 )
		return (0);

	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	close(fd);
	return (readed);
}
