
#include "lists.h"

/**
 * free_listint2 - the function that frees a listint_t list.
 * The function sets the head to NULL
 *
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *demp;

	if (head == NULL)
		return;
	while (*head)
	{
		demp = (*head)->next;
		free(*head);
		*head = demp;
	}
	*head = NULL;
}
