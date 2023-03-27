#include "main.h"
/**
 *swap_int - runtime starts here
 *@a: conditional parameter
 *@b: conditional parameter
 *
 *Description: functon that swaps two assigned numbers
 *Return: always 0 (successs), voided in this case
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
