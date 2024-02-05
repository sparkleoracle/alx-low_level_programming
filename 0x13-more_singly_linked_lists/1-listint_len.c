#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a linked lists
 *  Returns the number of nodes in the listint_t list.
 * @h: linked list of type listint_t to traverse parameter
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
