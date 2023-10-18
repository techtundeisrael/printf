#include "main.h"

/**
 * hexa_output: prints an hexgecimal number.
 * @num: arguments.
 * Return: counter.
 */
int printf_hex_aux(unsigned long int num)
{
	long int i;
	long int *hexa;
	long int x = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		x++;
	}
	x++;
	array = malloc(x * sizeof(long int));

	for (i = 0; i < x; i++)
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
