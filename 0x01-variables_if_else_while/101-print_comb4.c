#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int hundreds, tens, ones;

	for (hundreds = 48; hundreds < 58; hundreds++)
	{
		for (tens = 49; tens < 58; tens++)
		{
			for (ones = 50; ones < 58; ones++)
			{
				if (ones > tens && tens > hundreds)
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
					if (hundreds != 55 || tens != 56)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

