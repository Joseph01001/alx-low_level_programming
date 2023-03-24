#include "main.h"
/**
 *print_square - runtime begins here
 *@size: conditional parameter
 *
 *Description: function that prints a square, followed by a new line.
 *Return: return is voided
 */
void print_square(int size)
{
	int column;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 1 ; column <= size ; column++)
		{
			for (row = 1 ; row <= size ; row++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
