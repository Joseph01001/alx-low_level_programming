#include "main.h"
/**
 *print_alphabet_x10 - runtime begins here
 *
 * Description: prints lowercase alphabets ten times
 *Return: returns 0
 */

void print_alphabet_x10(void)

{
	int n;
	char i;

	for (n = 1; n <= 10; n++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
