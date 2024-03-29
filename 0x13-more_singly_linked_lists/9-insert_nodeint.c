#include "lists.h"

/**
 * insert_nodeint_at_index - funct that inserts a new node at a given pstn.
 * where idx is the index of the list where the new node should be added.
 * Index starts at 0
 * Returns: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
 * inserts a new node in a linked list, at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int j;
listint_t *new;
listint_t *temp = *head;

new = malloc(sizeof(listint_t));
if (!new || !head)
return (NULL);

new->n = n;
new->next = NULL;

if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}

for (j = 0; temp && j < idx; j++)
{
if (j == idx - 1)
{
new->next = temp->next;
temp->next = new;
return (new);
}
else
temp = temp->next;
}
return (NULL);
}
