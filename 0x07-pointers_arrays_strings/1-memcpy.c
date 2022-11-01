#include "main.h"

/**
 * _memcpy -  copies memory area
 * @n: number of bytes
 * @src: copied from this area
 * @dest: copied to this area
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
