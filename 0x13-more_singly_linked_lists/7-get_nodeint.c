#include <stddef.h>
#include "lists.h"
/**
  * get_nodeint_at_index - fonction
  *
  * @head: pointer
  * @index: argument
  *
  * Return: listint_t
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		if (count == index)
		{
			return (current);
		}
		current = current->next;
		count++;
	}
	return (NULL);
}
