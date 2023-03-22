#include "main.h"
/**
 * _abs - runtime starts
 *@i: condition parameter
 *
 *Description: function that computes the absolute value of an integer
 *Return: returns absolute value
 */
int _abs(int i)
{
	if (i < 0)
		i = -(i);
	else
		i = i;
	return (i);
}

