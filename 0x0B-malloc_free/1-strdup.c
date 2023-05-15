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

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	p = malloc(sizeof(char) * (len + 1));
	if (p == NULL)
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
