#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list.
 * where index is the index of the node, starting at 0
 * if the node does not exist, return NULL
 *
 * @head: first node in the linked list parameter
 * @index: index of the node to return parameter
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *demp = head;

	while (demp && j < index)
	{
		demp = demp->next;
		j++;
	}
	return (demp ? demp : NULL);
}
