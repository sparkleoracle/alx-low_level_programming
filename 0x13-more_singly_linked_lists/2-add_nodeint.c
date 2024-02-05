#include "lists.h"

/**
 * add_nodeint - the function that adds a new node
 * at the beginning of a linked list
 * If the function fails returns NULL. Otherwise
 * returns the address of the new element.
 *
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *few;

	few = malloc(sizeof(listint_t));
	if (!few)
		return (NULL);
	few->n = n;
	few->next = *head;
	*head = few;
	return (few);
}
