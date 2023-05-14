#include "main.h"
/**
 * _strstr - fonction that fills memory wj\ith a constant byte
 *
 * @haystack : pointer
 * @needle : ppinter
 *
 * Return: char pointer
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
