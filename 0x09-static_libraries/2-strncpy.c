#include "main.h"
/**
  * _strncpy - concatenates two strings
  *
  * @dest : pointer to the variable
  * @src : pointer to the variable
  * @n : pointer to the variable
  *
  * Return: char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int len_src = 0, i, len_dest = 0;

	while (*src != '\0')
	{
		len_src++;
		src++;
	}
	while (*dest != '\0')
	{
		len_dest++;
		dest++;
	}
	src -= len_src;
	dest -= len_dest;
	for (i = 0; i < n; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		else if (src[i] != '\0' && len_src >= i)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
	return (dest);
}
