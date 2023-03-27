#include "main.h"
/**
 *_puts - runtime starts here
 *@str: conditional string parameter
 *
 *Description:  function that prints a string, followed by a new line
 *Return: return voided
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
