#include "main.h"
/**
 *_isalpha - runtime starts here
 *@c: parameter for checking conditions
 *
 *Description: checks alphabeic characters
 *Return: returns 1/0 depending on conditions
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
