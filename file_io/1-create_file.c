#include "main.h"
/**
 * _strlen - find the length of a string
 * @str: string to find length
 * Return: length of the string
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * create_file - function that creates a file.
 * @filename:  file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	written = write(fd, text_content, _strlen(text_content));
	if (written == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
