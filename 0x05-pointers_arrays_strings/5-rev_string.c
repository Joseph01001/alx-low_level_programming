#include "main.h"
/**
 *rev_string - runtime starts here
 *@s: conditional string parameter
 *
 *Description: function that reverses a string
 *Return: return value voided
 */
void rev_string(char *s)
{
	char reverse;
	int length;
	int bounds;

	reverse = s[0];
	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (bounds = 0; bounds < length; bounds++)
	{
		length--;
		reverse = s[bounds];
		s[bounds] = s[length];
		s[length] = reverse;
	}
}
