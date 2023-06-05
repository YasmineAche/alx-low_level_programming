#include <stddef.h>
#include "lists.h"
/**
  * sum_listint - fonction
  *
  * @head: pointer
  *
  * Return: int
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
