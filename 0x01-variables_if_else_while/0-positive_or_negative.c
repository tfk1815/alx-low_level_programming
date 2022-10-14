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
		printf("The number you entered is zero\n");
	}

	else if (n > 0)
	{
		printf("The number you entered is a positive number\n");
	}

	else if (n < 0)
	{
		printf("The number you entered is a negative number\n");
	}

	return (0);

}
