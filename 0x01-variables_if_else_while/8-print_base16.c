#include <stdio.h>

/**
 * main-Entry
 *
 * Return: always zero
 */

int main(void)
{
	int n;
	char hex_values[] = "0123456789abcdef";

	for (n = 0; n < 16; n++)
	{
		putchar(hex_values[n]);
	}
	putchar('\n');
	return (0);
}
