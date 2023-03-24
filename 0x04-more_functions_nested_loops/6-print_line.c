#include "main.h"
/**
 *print_line - runtime starts here
 *
 *Description: function that draws a straight line in the terminal
 *Return: return is voided
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1 ; x <= n ; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
