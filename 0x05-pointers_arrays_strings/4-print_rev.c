#include "main.h"
/**
 *print_rev - runtime starts here
 *@s: conditional string parameter
 *
 *Description: function that prints a string, in reverse
 *Return: return value voided
 */
void print_rev(char *s)
{
	int length;
	int bounds;

	length = 0;
	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (bounds = length; bounds > 0; bounds--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
