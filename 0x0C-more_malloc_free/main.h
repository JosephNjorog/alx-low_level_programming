#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
int multipy(int mul, int num1, int num2);
void *_calloc(unsigned int nmemb, unsigned int size);
int _putchar(char c);
int _isdigit(char *str);
void _print_result(int *result, int size);
int _strlen(char *str);
void _multiply(char *num1, char *num2);

#endif
