#include "main.h"
/**
 * _memcpy - fonction that fills memory wj\ith a constant byte
 *
 * @dest : pointer
 * @src : pointer
 * @n : variable
 *
 * Return: char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
