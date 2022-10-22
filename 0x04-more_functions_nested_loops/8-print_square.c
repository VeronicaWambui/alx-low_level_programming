#include "main.h"

/**
 * print_square - function that prints a square
 * @size: size of square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int l, w;

		for (l = 0; w < size; l++)
		{
			for (w = 0; w < size; w++)
			{
				_putchar('#');
			}
			_putchar('\n')
		}
	}
}
