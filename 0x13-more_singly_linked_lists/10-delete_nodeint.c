#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * index of a listint_t linked list.
 * where index is the index of the node that should be deleted.
 * Index starts at 0
 * Returns: 1 if it succeeded, -1 if it failed
 *
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *demp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(demp);
		return (1);
	}
	while (j < index - 1)
	{
		if (!demp || !(demp->next))
			return (-1);
		demp = demp->next;
		j++;
	}
	current = demp->next;
	demp->next = current->next;
	free(current);
	return (1);
}
