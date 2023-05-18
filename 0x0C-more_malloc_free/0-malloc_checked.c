#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - fonction
  *
  * @b : variable
  *
  * Return: nothing
  */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
