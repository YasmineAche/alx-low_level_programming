#include "main.h"
/**
 * _strpbrk - fonction that fills memory wj\ith a constant byte
 *
 * @s : pointer
 * @accept : ppinter
 *
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	s++;
	}
	return (0);
}
