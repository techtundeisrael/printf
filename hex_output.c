#include "main.h"

/**
 * hex_output - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int hex_output(va_list val)
{
	int i;
	int *hexa;
	int x = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		x++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (i = 0; i < counter; i++)
	{
		hexa[i] = temp % 16;
		temp /= 16;
	}
	for (i = x - 1; i >= 0; i--)
	{
		if (hexa[i] > 9)
			hexa[i] = hexa[i] + 39;
		_putchar(hexa[i] + '0');
	}
	free(hexa);
	return (x);
}
