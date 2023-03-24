#include "main.h"
/**
* _isupper - runtime begins here
* @c: Variable text
* Description: checks for uppercase character
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
