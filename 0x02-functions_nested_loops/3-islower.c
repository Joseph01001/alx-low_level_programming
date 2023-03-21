#include "main.h"
/**
 *_islower - runtime begins here
 *@c: characters to be checked
 *
 *Description: checks for lowercase characters
 *Return: returns 1/0
 */
int _islower(int c)

{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
