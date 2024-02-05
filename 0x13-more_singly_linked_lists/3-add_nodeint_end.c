#include "lists.h"

/**
 * add_nodeint_end - function that adds a node at the end of a linked list
 * If the function fails returns NULL.
 * Otherwise returns the address of the new element
 *
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *view = *head;

	add = malloc(sizeof(listint_t));

	if (!add)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	while (view->next)
		view = view->next;
	view->next = add;
	return (add);
}
