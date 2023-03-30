#include "main.h"
/**
 * _strcmp - runtime starts here
 * @s1: input value
 * @s2: input value
 *
 * Description: function that compares string values
 * Return: returns s1[i] - s2[i] then 0
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
