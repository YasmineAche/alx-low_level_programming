#include <stdlib.h>
#include "lists.h"
/**
  * insert_nodeint_at_index - fonction
  *
  * @head: pointer to pointer
  * @idx: argument
  * @n: argument
  *
  * Return: listint_t
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp = *head;
	unsigned int i;

	if (idx == 0)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			return (NULL);
		}
		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	if (temp == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
