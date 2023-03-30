#include "main.h"
/**
 * reverse_array - runtime starts here
 * @a: array
 * @n: number of elements of array
 *
 * Description: function that reverses array of integers
 * Return: reurn is voided
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

