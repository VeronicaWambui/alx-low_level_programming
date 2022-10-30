#include <stdio.h>

/**
 * main -prints all single digit numbers
 * of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int num;

	num = 48;
	while (num < 58)
	{
		putchar(num);
		num++;
	}
	putchar(10);

	return (0);
}
