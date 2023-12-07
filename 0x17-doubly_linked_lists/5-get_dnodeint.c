#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a list
 * @head: head of the list
 * @index: index of the node
 *
 * Return: the nth node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
    unsigned int i = 0;
    dlistint_t *tmp = head;

    if (tmp == NULL)
        return (NULL);

    while (tmp != NULL)
    {
        if (i == index)
            return (tmp);
        tmp = tmp->next;
        i++;
    }
    return (NULL);
}
