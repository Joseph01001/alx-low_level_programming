#include "main.h"
/**
 *times_table - runtime starts here
 *
 *Description: function that prints the 9 times table, starting with 0
 *Return: returns voided
 */
void times_table(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = (a * b);
			if (c > 9)
			{
				d = (c % 10);
				e = (c / 10);
				_putchar(e + '0');
				_putchar(d + '0');
			}
			else
			{
				_putchar(' ');
				_putchar(c + '0');
			}
			if (b < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
