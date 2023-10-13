#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line argument strings.
 *
 * Return: 0 on success, 1 if arguments are incorrect, 2 if num_bytes is negative.
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

    int num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        return 2;
    }

    print_opcodes((char *)&main, num_bytes);

    return 0;
}
