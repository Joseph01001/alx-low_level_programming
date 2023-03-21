#include "main.h"
/**
 *print_sign - runtime starts here
 *@n: test parameter
 *
 *Description: function that prints the sign of a number
 *Return: return 1,0 or -1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if  (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
