#include <stddef.h>
#include "lists.h"
/**
  * listint_len - fonction
  *
  * @h: pointer
  *
  * Return: size_t
  */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
