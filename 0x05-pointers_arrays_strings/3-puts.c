#include <unistd.h>
int _putchar(char c);

/**
 * _puts - (char *str)
 * @str: The string to print
 * Return: void
 */

void _puts(char *str)

{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
