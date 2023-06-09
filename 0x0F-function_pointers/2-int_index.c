#include "function_pointers.h"
/**
  * int_index - fonction
  *
  * @array: variable
  * @cmp: pointer
  * @size: variable
  *
  * Return: int
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
