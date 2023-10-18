#include "main.h"
/**
 * _unsigned_output - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int unsigned_output(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last_num = n % 10, digit, x = 1;
	int  i = 1;

	n = n / 10;
	num = n;

	if (last_num < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last_num = -last_num;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			x = x * 10;
			num = num / 10;
		}
		num = n;
		while (x > 0)
		{
			digit = num / x;
			_putchar(digit + '0');
			num = num - (digit * x);
			x = x / 10;
			i++;
		}
	}
	_putchar(last_num + '0');

	return (i);
}
