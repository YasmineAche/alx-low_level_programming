#include "main.h"
/**
  * *_strcpy - resets a variable to 98
  *
  * @dest : pointer to the variable
  * @src : pointer to the variable
  *
  * Return: dest
  */
char *_strcpy(char *dest, char *src)
{
	int l = 0, x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';
	return (dest);
}
