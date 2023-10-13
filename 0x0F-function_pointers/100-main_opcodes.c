#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - Prints the opcodes of the main function.
 * @main_func: Pointer to the main function.
 * @num_bytes: Number of bytes to print.
 *
 * Return: void
 */
int main(void);

void print_opcodes(char *main_func, int num_bytes)
{
	int i;

	for (i = 0; i < num_bytes; i++)

	{
		printf("%02x", (unsigned char)main_func[i]);
		if (i < num_bytes - 1)
			printf(" ");
		else
			printf("\n");
	}
}
