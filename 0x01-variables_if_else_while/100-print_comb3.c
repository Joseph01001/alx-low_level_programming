#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int tens, ones;

	for (tens = 48; tens <= 56; tens++)
	{
		for (ones = 49; ones <= 57; ones++)
		{
			if (ones > tens)
			{
				putchar(tens);
				putchar(ones);
				if (tens != 56 || ones != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

