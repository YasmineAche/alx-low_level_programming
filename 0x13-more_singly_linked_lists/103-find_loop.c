#include <stddef.h>
#include "lists.h"
/**
  * find_listint_loop - fonction
  *
  * @head: pointer
  *
  * Return: listint_t
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
	{
		return (NULL);
	}
	slow = head->next;
	fast = head->next->next;
	while (fast && fast->next)
	{
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		slow = slow->next;
		fast = fast->next->next;
	}
	return (NULL);
}
