#include <stdlib.h>
#include "lists.h"
/**
  * pop_listint - fonction
  *
  * @head: pointer to pointer
  *
  * Return: int
  */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	data = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	return (data);
}
