#include "main.h"

/**
 * main - Copies content of a file to another file.
 * @ac: Argument count.
 * @av: Argument vector (array of strings {file_names}) .
 *
 * Return: always 0 (Success)
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t i, j;

	if (ac != 3)
		dprintf(2, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(av[1], O_RDONLY);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_APPEND | O_TRUNC, 0664);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	do {
		i = read(fd_from, buffer, 1024);
		if (i == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
		j = write(fd_to, buffer, i);
		if (j == -1 || j != i)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	} while (i);


	i = close(fd_from), j = close(fd_to);
	if (i || j)
	{
		if (i)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (j)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}
