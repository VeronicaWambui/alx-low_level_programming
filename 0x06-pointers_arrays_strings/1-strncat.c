#include "main.h"

/**
 * _strncat - joins two strings with n bytes
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: number of char to be copies
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i =  0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
