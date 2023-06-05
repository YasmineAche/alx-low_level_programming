#include <stdlib.h>
#include "lists.h"
/**
  * free_listint_safe - fonction
  *
  * @h: pointer
  *
  * Return: size_t
  */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *current, *temp;

	if (h == NULL)
	{
		return (0);
	}
	current = *h;
	while (current != NULL)
	{
		count++;
		if (current->next >= current)
		{
			temp = current->next;
			free(current);
			current = NULL;
			*h = NULL;
			break;
		}
		else
		{
			temp = current;
			current = current->next;
			free(temp);
		}
	}
	return (count);
}
