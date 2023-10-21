#include "main.h"
/**
 * string_output - print a string.
 * @val: argument.
 * Return: the length of the string.
 */

int string_output(va_list val)
{
	char *str;
	int i, str_len;

	str = va_arg(val, char *);
	if (str == NULL)
	{
		str = "(null)";
		str_len = len_of_str(str);
		for (i = 0; i < str_len; i++)
			_putchar(str[i]);
		return (str_len);
	}
	else
	{
	str_len = len_of_str(str);
		for (i = 0; i < str_len; i++)
			_putchar(str[i]);
		return (str_len);
	}
}
