#include "main.h"
/**
 * string_toupper - runtime starts here
 * @n: pointer
 *
 * Description: function that changes all lowercase to upper
 * Return: returns n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
		i++;
	}
	return (n);
}
