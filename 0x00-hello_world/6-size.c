#include <stdio.h>
/**
 * main - runtime of code starts here
 *
 * printf: outputs preset text
 * Return: the returned value is 0
 */
int main(void)
{
	printf("%lu\n", sizeof(char));
	printf("%lu\n", sizeof(int));
	printf("%lu\n", sizeof(float));
	printf("%lu", sizeof(double));
	return (0);
}
