#include "lists.h"

/**
 * print_listint - the function that prints all the elements of a linked list
 * Returns the number of nodes in the listint_t list.
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t fig = 0;

	while (h)
	{
		printf("%d\n", h->n);
		fig++;
		h = h->next;
	}
	return (fig);
}
