#include "main.h"
/**
 *print_diagonal - runtime starts here
 *@n: conditional parameter
 *
 *Description: function that draws a diagonal line on the terminal
 *Return: return is voided
 */
void print_diagonal(int n)
{
	int a;
	int b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1 ; a <= n ; a++)
		{
			for (b = 1 ; b <= n ; b++)
			{
				if (a == b)
				{
					_putchar('\\');
				}
				else if (a > b)
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
