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
	void *p;
	unsigned int i;
	char *pp;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(size * nmemb);
	if (p == NULL)
	{
		return (NULL);
	}
	pp = (char *)p;
	for (i = 0; i < nmemb * size; i++)
	{
		pp[i] = 0;
	}
	return (p);
}
