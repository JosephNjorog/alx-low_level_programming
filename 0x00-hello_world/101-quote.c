#include<stdio.h>

/**
 * main - entry point
 *
 * Description: printing to standard error
 * Return: always 0 (Succcess)
 */
int main(void)
{
	char s[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(s, sizeof(s), 1, stderr);
	return (1);
}
