#include <stdio.h>

/**
 * main - prints all possible different combinations
 * of two digits separated by ,
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * Return: 0
 */

int main(void)
{
	int n1 = 48;
	int n2;
	int v = 44;

	while (n1 <= 57)
	{
		n2 = n1 + 1;

		while (n2 <= 57)
		{
			putchar(n1);
			putchar(n2);

			if (n1 != 56 || n2 != 57)
			{
				putchar(v);
				putchar(32);
			}
			n2 += 1;
		}
		n1 += 1;
	}
	putchar('\n');

	return (0);
}
