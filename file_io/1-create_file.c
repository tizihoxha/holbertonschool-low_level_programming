#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: name of the file pointer
 * @text_content: contents of the file
 * Return: if the function fails return -1 else return 1
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

