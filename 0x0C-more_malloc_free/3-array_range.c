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
	int *p, i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	p = malloc(sizeof(int) * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = min + i;
	}
	return (p);
}
