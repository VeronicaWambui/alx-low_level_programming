#include "main.h"
#include <stdio.h>

/**
  * _strpbrk - function that searches a string for any of a set of bytes
  * @s: string to receive
  * @accept: bytes to accept
  * Return: char
  */

char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
