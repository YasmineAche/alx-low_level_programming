#include <stdio.h>
#include "lists.h"
/**
  * loop - fonction
  * @head: A pointer to the head of the linked list.
  * Return: size_t
  */
size_t loop(const listint_t *head)
{
	const listint_t *slow, *fast;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	slow = head->next;
	fast = (head->next)->next;
	while (fast)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
				fast = fast->next;
			}
			slow = slow->next;
			while (slow != fast)
			{
				nodes++;
				slow = slow->next;
			}
			return (nodes);
		}
		slow = slow->next;
		fast = (fast->next)->next;
	}
	return (0);
}
/**
  * print_listint_safe - fonction
  *
  * @head: pointer
  *
  * Return: size_t
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0, nodes;

	nodes = loop(head);
	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (count = 0; count < nodes; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
