#include <stdio.h>
/**
 *main - runtime starts here
 *
 *Description: for multiples of three print Fizz
 * for the multiples of five print Buzz
 * for numbers which are multiples of both three and five print FizzBuzz
 *Return: return is always 0
 */
int main(void)
{
	int range;

	for (range = 1 ; range <= 100 ; range++)
	{
		if (range % 3 == 0 && range % 5 != 0)
		{
			printf("Fizz ");
		}
		else if (range % 5 == 0 && range % 3 != 0)
		{
			printf("Buzz ");
		}
		else if (range % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (range == 1)
		{
			printf("%d ", range);
		}
		else
		{
			printf("%d ", range);
		}
	}
	printf("\n");
	return (0);
}
