#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: string length.
 */
int _printf(const char * const format, ...)
{
	output_print i[] = {
		{"%s", string_output},
	       	{"%c", char_output},
		{"%%", percent_output},
		{"%i", int_output}, 
		{"%d", dec_output}, 
		{"%r", srev_output},
		{"%R", rot_output},
	       	{"%b", bin_output},
	       	{"%u", unsigned_output},
		{"%o", oct_output},
	       	{"%x", hex_output},
	       	{"%X", hexa_output},
		{"%S", string_exclusion},
	       	{"%p", pointer_output}
	};

	va_list list_of_arg;
	int x = 0, y, str_len = 0;

	va_start(list_of_arg, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
Here:
	while (format[x] != '\0')
	{
		y = 10;
		while (y >= 0)
		{
			if (i[y].id[0] == format[x] && i[y].id[1] == format[x + 1])
			{
				str_len += i[y].f(list_of_arg);
				x = x + 2;
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		str_len++;
		x++;
	}
	va_end(list_of_arg);
	return (str_len);
}
