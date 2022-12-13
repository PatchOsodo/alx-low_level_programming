#include "main.h"
/**
 * _strcpy - copies one string to another
 * @dest: destination string
 * @src: source string
 * Return: dest(Destination string)
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	j = _strlen(src);
	i = 0;
	while (i <= j)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
