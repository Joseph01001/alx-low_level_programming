#include "main.h"
/**
 *print_numbers - runtime begins here
 *
 *Description: function that prints the numbers, from 0 to 9
 *Return: retuen is voided
 */
void print_numbers(void)
{
	int number;

	for (number = '0' ; number <= '9' ; number++)
	{
		_putchar(number);
	}
	_putchar('\n');
}
