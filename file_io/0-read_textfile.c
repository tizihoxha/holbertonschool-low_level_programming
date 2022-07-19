#include "main.h"

/**
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (!filename)
		return (0);
	o = open(filename, O_RDONLY);
	if (o == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	r = read(o, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		return (0);
	}
	buffer[r] = '\0';

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	return (w);
	close(o);
}

