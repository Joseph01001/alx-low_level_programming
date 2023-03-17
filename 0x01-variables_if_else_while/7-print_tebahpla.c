#include <stdio.h>
/**
 * main - a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: returns 0 (success)
 */
#include <stdio.h>

int main(void)
{
	int n;

	for (n = 122; n > 96; n--)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
