#include "main.h"

/**
 * rev_string -  a function that reverses a string
 * @s: String to reverse
 * Return: nothing
 */
void rev_string(char *s)
{
	char v = s[0];
	int i = 0;
	int a;

	while (s[i] != '\0')
		i++;
	for (a = 0; a < i; a++)
	{
		i--;
		v = s[a];
		s[a] = s[i];
		s[i] = v;
	}
}

