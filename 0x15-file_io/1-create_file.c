#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <fcntl.h>
#include <string.h>

/**
 * create_file - Creates a file with the specified conditions.
 * @filename: Name of the file to create.
 * @text_content: A NULL-terminated string to write.
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, write_result;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	return (-1);

	if (text_content != NULL)
	{
	write_result = write(fd, text_content, strlen(text_content));
	if (write_result == -1)
	{
	close(fd);
	return (-1);
	}
	}

	close(fd);
	return (1);

}
