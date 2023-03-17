#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Return: returns 0 (Success)
 */
int main(void)
{
	int 1num1, 2num2;

	for (1num1 = 0; 1num1 < 100; 1num1++)
	{
		for (2num2 = 0; 2num2 < 100; 2num2++)
		{
			if (1num1 < 2num2)
			{
				putchar((1num1 / 10) + 48);
				putchar((1num1 % 10) + 48);
				putchar(' ');
				putchar((2num2 / 10) + 48);
				putchar((2num2 % 10) + 48);
				if (i 1num1 != 98 || 2num2 != 99)
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

