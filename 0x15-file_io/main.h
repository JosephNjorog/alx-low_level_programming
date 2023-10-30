#ifndef H
#define H

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include<sys/stat.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdarg.h>

ssize_t read_textfile(const char *filename, size_t letters);

int create_file(const char *filename, char *text_content);

size_t _strlen(char *s);

int append_text_to_file(const char *filename, char *text_content);

size_t _strlen2(char *s);


#endif /* H */
