#include <stdio.h>

/**
 * print_triangle - function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: Always 0
 */
void print_triangle(int size)
{
	int row, col, hei;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				hei = (size - row) - 1;
				if (col < hei)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
