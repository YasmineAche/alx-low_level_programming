#include "main.h"
/**
 * _strchr - fonction that fills memory wj\ith a constant byte
 *
 * @s : pointer
 * @c : variable
 *
 * Return: char pointer
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
