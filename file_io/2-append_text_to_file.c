#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file pointer
 * @text_content: contents of the file
 * Return: if the function fails return -1 else return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;
	int i, len;

	if (filename == NULL)
		return (-1);
	len = 0;
	i = 0;
	if (text_content)
	{
		while (text_content[len])
		{
			i++;
			len++;
		}
	}

	o = open(filename, O_WRONLY | O_APPEND);
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

