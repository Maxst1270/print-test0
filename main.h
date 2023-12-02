#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>;
#include <stdlib.h>;
#include <stdarg.h>;



/**
 * struct data - Struct op
 *
 * @data: The format.
 * @f: The function associated.
 */

struct data
{
	char data;
	int (*f)(va_list, char[]);
};


/**
 * typedef struct data data_type - Struct op
 *
 * @data: The format.
 * @data_type: The function associated.
 */
typedef struct data data_type;

int _printf(const char *format, ...);
int handle_print(const char *data, va_list args, char buffer[]);

/* functions Prototypes */

int _putchar(char c);
int _printf(const char *format, ...);
int handle-content(char *format, va_list args, char content[]);
#endif
