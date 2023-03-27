#include "main.h"
/**
 *puts2 - runtime starts here
 *@str: conditional string parameter
 *
 *Description: function that prints every other character of a string in order
 *Return: return value is voided
 */
void puts2(char *str)
{
	int length;
	int bounds;
	int string_call;
	char *string;

	length = 0;
	string_call = 0;
	while (*string != '\0')
	{
		string++;
		length++;
	}
	string_call = length - 1;
	for (bounds = 0; bounds <= string_call; bounds++)
	{
		if (bounds % 2 == 0)
		{
			_putchar(str[bounds]);
		}
	}
	_putchar('\n');
}
