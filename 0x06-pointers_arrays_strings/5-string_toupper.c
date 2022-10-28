#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string 
 * to uppercase
 * @n: Pointer to n
 * Return: char
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (*(n + i) != '\0')
	{
		if (*(n + i) >= 97 && *(n + i) <= 122)
			*(n + i) = *(n + i) - ' ';
		i++;
	}
	return (n);
}
