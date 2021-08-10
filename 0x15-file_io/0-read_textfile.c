#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int s;
ssize_t t;
char *buf;
if (!filename)
{
return (0);
}
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	s = read(fd, buf, letters);

	buf[s] = '\0';

	close(fd);

	t = write(STDOUT_FILENO, buf, s);
	free(buf);
	return (t);
}
