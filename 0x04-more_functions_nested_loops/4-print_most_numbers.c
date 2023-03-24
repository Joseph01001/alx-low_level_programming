#include "main.h"
/**
 *print_most_numbers - runtime starts here
 *
 *Descripton: unction that prints the numbers, from 0 to 9 (withou 2 and 4)
 *Return: return voided
 */
void print_most_numbers(void)
{
	int number;

	for (number = '0' ; number <= '9' ; number++)
	{
		if (number != '2')
		{
			if (number != '4')
			{
				_putchar(number);
			}
		}
	}
	_putchar('\n');
}
