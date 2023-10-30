#include "main.h"

/**
 * _strlen - count number of characters in a string
 * @s: given string
 *
 * Return: Length
 */
size_t _strlen(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * create_file - Creates file and adds text to it.
 * @filename: Name of the file
 * @text_content: Content to be added to file.
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content)
		if (write(fd, text_content, _strlen(text_content)) < 0)
			return (-1);
	close(fd);
	return (1);
}
