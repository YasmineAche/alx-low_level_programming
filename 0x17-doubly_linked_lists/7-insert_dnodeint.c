#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new;
    dlistint_t *tmp = *h;
    unsigned int i = 0;

    new = malloc(sizeof(dlistint_t));
    if (new == NULL)
        return (NULL);

    new->n = n;
    new->next = NULL;
    new->prev = NULL;

    if (idx == 0)
    {
        new->next = *h;
        (*h)->prev = new;
        *h = new;
        return (new);
    }

    while (i < idx - 1)
    {
        if (tmp == NULL)
            return (NULL);
        tmp = tmp->next;
        i++;
    }
    if (tmp == NULL)
        return (NULL);
    new->next = tmp->next;
    if (tmp->next != NULL)
        tmp->next->prev = new;
    tmp->next = new;
    new->prev = tmp;
    return (new);
}
