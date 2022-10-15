#include <stdio.h>

/**
 * main-Entry
 *
 * Return: always 0
 */

int main(void)
{
	int num1, num2 = '0', j;

	for (num1 = '0'; num1 <= '9'; num1++)
	{
		for (j = num2; j <= '9'; j++)
		{
			if (num1 != j)
			{
				putchar(num1);
				putchar(j);
			}
			if (num1 == j)
			{
				continue;
			}
			if (num1 == '8' && j == '9')
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		num2++;
	}
	putchar('\n');
	return (0);
}
