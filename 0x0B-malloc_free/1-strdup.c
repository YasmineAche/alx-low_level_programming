#include "main.h"
#include <stdlib.h>
/**
  * _strdup - fonction
  *
  * @str : variable
  *
  * Return: Null if alloc's size is 0 or pointer
  */
char *_strdup(char *str)
{
	char *p;
	unsigned int i, len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	p = malloc(sizeof(char) * len);
	if (len == 0 || str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			p[i] = str[i];
		}
		p[i] = '\0';
		return (p);
	}
}
