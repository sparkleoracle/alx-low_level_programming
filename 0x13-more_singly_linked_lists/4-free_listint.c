#include "lists.h"

/**
 * free_listint - the main function that frees a linked list
 * @head: listint_t list to be freed parameter
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
