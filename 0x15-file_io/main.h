#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
 void error_exit(int code, const char *format, ...);
 void error_exit(const char *message):

#define ELF_HEADER_SIZE 64
/**
 * error_exit - main function
 * @message: parameter 1
 * Return: void
 */
void error_exit(const char *message) 
{
	fprintf(stderr, "Error: %s\n", message);
	exit(98);
}

#endif
