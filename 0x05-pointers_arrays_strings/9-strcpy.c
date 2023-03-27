#include "main.h"

/**
 * *_strcpy - runtime starts here
 * @dest: copy to
 * @src: copy from
 *
 * Description: a function that copies the string pointed to by src
 * Return: the return value is the string
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l ; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}

