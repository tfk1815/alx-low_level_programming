#include <stdio.h>

/**
 * main- Entry
 *
 * Return: Always zero
 */
int main(void)

{
	int n;

	printf("Enter any number:\n");

	scanf("%d", &n);
	if (n == 0)

	{
		printf("is zero\n");
	}

	else if (n > 0)
	{
		printf("is positive\n");
	}

	else if (n < 0)
	{
		printf("is negative\n");
	}

	return (0);

}
