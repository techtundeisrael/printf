#include "main.h"
/**
 * len_of_str - Returns the lenght of a string.
 * @s: Type char pointer
 * Return: x.
 */
int len_of_str(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++);
	return (x);

}
/**
 * _strlen - Strlen function but applied for constant char pointer s
 * @s: Type char pointer
 * Return: x
 */
int _strlen(const char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++);
	return (x);
}
