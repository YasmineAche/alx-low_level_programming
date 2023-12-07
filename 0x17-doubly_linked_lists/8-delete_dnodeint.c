#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index index of a list
 * @head: head of the list
 * @index: index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *tmp, *tmp2;
    unsigned int i = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        tmp = *head;
        *head = (*head)->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(tmp);
        return (1);
    }

    tmp = *head;
    while (tmp != NULL && i < index)
    {
        tmp2 = tmp;
        tmp = tmp->next;
        i++;
    }
    if (tmp == NULL)
        return (-1);

    tmp2->next = tmp->next;
    if (tmp->next != NULL)
        tmp->next->prev = tmp2;
    free(tmp);
    return (1);
}
