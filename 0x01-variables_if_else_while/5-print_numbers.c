#include <stdio.h>

/**
 * main- Entry
 *
 * Return: always zero
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
