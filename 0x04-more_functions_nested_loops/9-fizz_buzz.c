#include <stdio.h>

/**
 * main - prints Buzz each numbers of 3 and 5.
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		printf(" ");
		if (n % 3 == 0)
			printf("Fizz");
		if (n % 5 == 0)
			printf("buzz");
		if (n % 3 != 0 && n % 5 != 0)
			printf("%d", n);
	}
	printf("\n");
	return (0);

}
