#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 * to the POSIX standard output
 * @filename: name of the file pointer
 * @letters: contents of the file
 * Return: if the function fails return 0 else return number of letters
 */
int create_file(const char *filename, char *text_content)
{
	int o, w;
	int i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content)
	{
		while (text_content[i])
			i++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
		w = write(o, text_content, i);
		if (o == -1)
		{
			return (-1);
		}
		if (w == -1)
		{
			return (-1);
		}
		close(o);
		return (1);
}

