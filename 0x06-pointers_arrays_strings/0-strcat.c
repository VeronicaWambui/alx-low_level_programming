#include "main.h"

/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to destination
 * @scr: pointer to source char
 * Return: char
 */

char *_strcat(char *dest, char *src);
{
	int i = 0;
	int j = 0;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (scr[j] != '\0')
	{
		dest[i] = scr[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
