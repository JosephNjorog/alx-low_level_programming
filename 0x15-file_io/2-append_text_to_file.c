#include "main.h"

/**
 * _strlen2 - Counts number of characters in a string
 * @s: given string
 *
 * Return: Length of the string.
 */
size_t _strlen2(char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: Content to be added at the end of file.
 *
 * Return: 1 (Success) | -1 (Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
		if (write(fd, text_content, _strlen2(text_content)) < 0)
			return (-1);
	close(fd);
	return (1);
}
