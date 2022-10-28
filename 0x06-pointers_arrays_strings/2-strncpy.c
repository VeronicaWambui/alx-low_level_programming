#include "main.h"

/**
 *  _strncpy -  a function that copies a string
 *  @dest: pointer to destination char
 *  @src: pointer to source char
 *  @n: number of bytes
 *  Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int v;

	v = 0;
	while (v < n && src[j] != '\0')
	{
		dest[v] = src[v];
		v++;
	}
	while (v < n)
	{
		dest[v] = '\0';
		v++;
	}
	return (dest);
}
