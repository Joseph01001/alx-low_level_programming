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

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			c = (a + b);
			_putchar(c + '0');
			_putchar(',');
		}
		_putchar('\n');
	}
}
