#include "main.h"

/**
 * print_line - prints straight line n times.
 *
 * @n: times straight line is printed.
 * Return: no return.
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n');
}
