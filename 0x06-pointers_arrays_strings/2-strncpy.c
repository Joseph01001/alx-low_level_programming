#include "main.h"
/**
 * _strncpy - runtime starts here
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Description: function that copies a string
 * Return: returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
