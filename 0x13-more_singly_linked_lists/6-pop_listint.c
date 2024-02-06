#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * if the linked list is empty return 0
 *
 * @head: pointer to the first element in the linked list parameter
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *demp;
	int numb;

	if (!head || !*head)
		return (0);
	numb = (*head)->n;
	demp = (*head)->next;
	free(*head);
	*head = demp;
	return (numb);
}
