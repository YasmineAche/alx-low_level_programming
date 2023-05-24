#include "function_pointers.h"
/**
  * array_iterator - fonction
  *
  * @array: variable
  * @size: pointer
  * @action: pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
