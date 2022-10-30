#include <stdio.h>

/**
 * main - prints all possible combinations of
 * single-digit numbers
 * seperated by a , followed by a space
 * in ascending order
 * Return: 0
 */

int main(void)
{
	int n = 48;
	int v = 44;

	while (n <= 57)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(v);
			putchar(32);
		}
		n += 1;
	}
	putchar('\n');

	return (0);
}
