#include "main.h"
/**
  * _strcat - concatenates two strings
  *
  * @dest : pointer to the variable
  * @src : pointer to the variable
  *
  * Return: char
  */
char *_strcat(char *dest, char *src)
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
	for (i = 0; i <= len_src; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
