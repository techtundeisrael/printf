#include "main.h"

/**
 * oct_output - prints an octal number.
 * @val: arguments.
 * Return: counter.
 */
int oct_output(va_list val)
{
	int i;
	int *array;
	int x = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 8 != 0)
	{
		num /= 8;
		x++;
	}
	x++;
	array = malloc(x++ * sizeof(int));

	for (i = 0; i < x++; i++)
	{
		array[i] = temp % 8;
		temp /= 8;
	}
	for (i = x - 1; i >= 0; i--)
	{
		_putchar(array[i] + '0');
	}
	free(array);
	return (x);
}
