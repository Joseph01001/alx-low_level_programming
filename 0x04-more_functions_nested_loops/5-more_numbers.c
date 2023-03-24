#include "main.h"
/**
 *more_numbers - runtime starts here
 *
 *Description: function that prints 10 times the numbers, from 0 to 14
 *Return: return voided
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0 ; b <= 9 ; a++)
	{
		for (b = 0 ; b <= 14 ; b++)
		{
			_putchar((b / 10) + '0');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
