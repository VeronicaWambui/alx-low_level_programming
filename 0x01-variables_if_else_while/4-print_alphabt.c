#include <stdio.h>

/**
 * main - print the letters of the alphabet
 * in lower case except q and e
 * Return: 0
 */

int main(void)
{
	int lower = 97;

	while (lower < 123)
	{
		if (lower != 101 && lower != 113)
		{
			putchar(lower);
		}
		lower++;
	}

	putchar(10);

	return (0);
}
