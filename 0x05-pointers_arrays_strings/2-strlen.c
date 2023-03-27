#include "main.h"
/**
 *_strlen - runtime starts here
 *@s: conditional character parameter
 *
 *Description: function that returns the length of a string
 *Return: returns length
 */
int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s != 0)
	{
		length++;
		s++;
	}
	return (length);
}
