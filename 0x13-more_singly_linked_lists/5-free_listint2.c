#include "lists.h"
/**
  * free_listint2 - fonction
  *
  * @head: pointer to pointer
  */
void free_listint2(listint_t **head)
{
	listint_t *temp, *node;

	if (head == NULL)
	{
		return;
	}
	node = *head;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
