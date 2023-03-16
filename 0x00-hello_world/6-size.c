#include <stdio.h>
/**
 * main - runtime of code starts here
 *
 * printf: outputs preset text
 * Return: the returned value is 0
 */
int main(void)
{
	printf("size of char: %d byte(s)", sizeof(char));
	printf("size of int: %d byte(s)", sizeof(int));
	printf("size of float: %d byte(s)", sizeof(float));
	printf("size of double: %d byte(s)", sizeof(double));
	return (0);
}
