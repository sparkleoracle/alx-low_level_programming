#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t num = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		num += 1;
		cursor = cursor->next;
	}
	return (num);
}
