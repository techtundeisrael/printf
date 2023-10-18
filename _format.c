#include "main.h"

int _printf(const char *format, ...)
{
	int output_print = 0;

	va_list list_of_arg;
	if(format == NULL)
	{
		return(-1);
	}
	va_start(list_of_args, format);
	while(*format != '\0')
	{
		if(*format == '%')
		{
			format++;
			output_len += _output(format, list_of_arg);
		}
		else{
			output_len += _ouput(STDOUT_FILENO, &(*format), 1);
			format++;
		}
	}
	va_end(list_of_arg);
	return (output_print);
}
