#include <stdio.h>

/**
 * main - a program that prints all possible combinations of two two-digit numbers 0 to 99
 * separated by , followed by a space
 * printed in ascending order
 * Return: 0
 */

int main(void)
{
	int n1 = 48;
	int i = 0;
	int j;
	int v = 44;

	while (i <= 99)
	{
		j = i + 1;

		while (j <= 99)
		{
			putchar((i / 10) + n1);
			putchar((i % 10) + n1);
			putchar(32);
			putchar((j / 10) + n1);

			if (i != 98 || j != 99)
			{
				putchar(v);
				putchar(32);
			}
			j += 1;
		}
		i += 1;
	}
	putchar('\n');

	return (0);
}
