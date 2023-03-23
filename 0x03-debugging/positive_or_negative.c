#include "main.h"
/**
 *positive_or_negative - runtime begins here
 *@i: parametric condition
 *
 *Description: checks if number is poitive or negative
 *Return: return is voided
 */
void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is zero\n", i);
	}
}
