#include"main.h"

/**
 * _printf - is a print function
 * @format: specific format
 * Return: characters that are printed
*/ 

int _printf(const char *format, ...)
{
	int chars = 0;
	va_list args;
	va_start(args, format);

	while (*format != NULL)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			chars++;
		}
		*format++;
		if (*format == '\0')
		    break;
		else
		{
	        	cont-array(content, &cont-index);
	       		output = handle-content(format, args);
	       		chars += output;
		}
	}
	cont-array(content, &cont-index);
	va_end(args);
	return (chars);
}

/**
 * cont-array - Prints the contents of the buffer if it exist
 * @content: Array of chars
 * @cont-arraye: Index at which to add next char.
*/
void cont-array(char content[], int *cont-index)
{
	if (*cont-array > 0)
		write(1, &content[0], *cont-array);
	cont-array = 0;
}
 
	    

