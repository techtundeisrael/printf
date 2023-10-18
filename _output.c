#include "main.h"

/**
 * _output: output function
 * @format: format string
 * @list_of_arg:
 * Return:
 */

int _output(const char *format, va_list list_of_arg);
{
	int ouput-print = 0;
	switch (*format)
	{
		case 'c':
			output_print += _printf(va_arg(list_of_arg, char));
			break;
		case 's':
			output_print += print_string(va_arg(list_of_ar, char *));
			break;
		case '%':
			output_print += _printf ('%');
			break;
		case '\0':
			return (-1);
		default:
			output_print += printc('%');
			output_print += write(STDOUT_FILENO, &(*format), 1);
			break;
	}
	return (output_string);
}
