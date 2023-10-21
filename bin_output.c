#include "main.h"

/**
 * bin_output - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int bin_output(va_list val)
{
	int digit = 0;
	int net = 0;
	int i, x = 1, y;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int u;

	for (i = 0; i < 32; i++)
	{
		u = ((x << (31 - i)) & num);
		if (u >> (31 - i))
			digit = 1;
		if (digit)
		{
			y = u >> (31 - i);
			_putchar(y + 48);
			net++;
		}
	}
	if (net == 0)
	{
		net++;
		_putchar('0');
	}
	return (net);
}
