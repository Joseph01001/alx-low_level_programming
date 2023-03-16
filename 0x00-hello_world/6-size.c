#include <stdio.h>
/**
 * main - runtime of code starts here
 *
 * printf: outputs preset text
 * Return: the returned value is 0
 */
int main(void)
{
	printf("size of char: %d byte(s)\n", sizeof(char));
	printf("size of int: %d byte(s)\n", sizeof(int));
	printf("size of a long int: %d byte(s)\n", sizeof(long int));
	printf("size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("size of float: %d byte(s)\n", sizeof(float));
	return (0);
}
