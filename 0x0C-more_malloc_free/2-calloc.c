#include "main.h"
#include <stdlib.h>
/**
  * _calloc - fonction
  *
  * @nmemb : variable
  * @size : variable
  *
  * Return: nothing
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p, i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);
}
