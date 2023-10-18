#include "main.h"

/**
 * char_output - prints a char.
 * @val: arguments.
 * Return: 1.
 */
int char_output(va_list val)
{
	char s;

	s = va_arg(val, int);
	_putchar(s);
	return (1);
}
