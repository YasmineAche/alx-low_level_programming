#include "lists.h"
#include <stdio.h>
/**
  * list_len - fonction
  * @h: pointer
  * Return: size_t
  */
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
