#include "main.h"

/**
 * print_triangle - prints a triangle.
 * @size: numbers of lines.
 * Return: no return.
 */
void print_triangle(int size)
{
	int h, tri;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (tri = size - h; tri > 0; tri--)
				_putchar(' ');
			for (tri = 0; tri < h; tri++)
				_putchar('#');
			if (h == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
