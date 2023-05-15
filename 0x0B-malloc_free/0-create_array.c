#include "main.h"
#include <stdlib.h>
/**
  * create_array - fonction
  *
  * @size : variable
  * @c : variable
  *
  * Return: Null if alloc's size is 0 or pointer
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);
	if (size == 0 || p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
		return (p);
	}
}
