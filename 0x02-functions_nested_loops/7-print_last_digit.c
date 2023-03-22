#include "main.h"
/**
 *print_last_digit - runtime starts
 *@n: function parameter
 *
 *Description: function that prints the last digit of a number
 *Return: returns last digit
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (n < 0)
		x = -(x);
	_putchar('0' + x);
	return (x);
}
