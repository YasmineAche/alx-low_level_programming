#include "main.h"
#include <stdlib.h>
/**
  * array_range - fonction
  *
  * @min : variable
  * @max : varoable
  *
  * Return: int
  */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(max - min + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = min; i <= max; i++)
	{
		*p = i;
		p++;
	}
	p -= max - min + 1;
	return (p);
}
