#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - runtime starts here
 *@n: operation parameter
 *
 *Description: function that prints all natural numbers from n to 98
 *Return: returns 0
 */
void print_to_98(int n)
{
	int a;
	int b;
	int c;
	int d;

	if (n <= 98)
	{
	for (; n <= 98 ; n++)
	{
		if (n == 0)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n > 9)
		{
			a = n % 10;
			b = n / 10;
			_putchar(b + '0');
			_putchar(a + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		if (n < 0)
		{
			d = -(n);
			_putchar('-');
			_putchar(d + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n < -9)
		{
			_putchar('-');
			_putchar((d / 10) + '0');
			_putchar((d % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
		else if (n < -99)
		{
			_putchar('-');
			_putchar((d / 100) + '0');
			_putchar((n - (d / 100)) + '0');
			_putchar((d % 10) + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
	else if (n >= 98)
	{
		for (; n >= 98 ; n--)
		{
			c = n / 100;
			b = (n - (c * 100)) / 10;
			a = n % 10;
			if (n > 99)
			{
			_putchar(c + '0');
			_putchar(b + '0');
			_putchar(a + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar(b + '0');
				_putchar(a + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
