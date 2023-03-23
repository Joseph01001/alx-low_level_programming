#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - runtime starts here
 *@n: operation parameter
 *
 *Description: function that prints all natural numbers from n to 98
 *Return: returns 0
 */
void print_to_98(int n)
{
	int a;

	if (n >= 0 && n <= 98)
	{
		for (a = n; a <= 97 ; a++)
		{
			printf("%d, ", a);
		}
		printf("98");
		printf("\n");
	}
	else if (n < 0)
	{
		for (a = n ; a <= 97 ; a++)
		{
			printf("%d, ", a);
		}
		printf("98");
		printf("\n");
	}
	else if (n > 98)
	{
		for (a = n ; a >= 99 ; a--)
		{
			printf("%d, ", a);
		}
		printf("98");
		printf("\n");
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
}
