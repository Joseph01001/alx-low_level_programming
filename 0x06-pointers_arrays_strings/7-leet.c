#include "main.h"
/**
 * leet - runtime starts here
 * @n: input value
 *
 * Description: function that encodes selected letters to 1337
 * Return: rturns the value of n
 */
char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
