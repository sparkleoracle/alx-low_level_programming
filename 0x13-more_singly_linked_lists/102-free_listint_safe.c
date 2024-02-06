#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * The function sets the head to NULL
 * if it fails, Returns the size of the list that was free’d
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t tin = 0;
	int prev;
	listint_t *demp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		prev = *h - (*h)->next;
		if (prev > 0)
		{
			demp = (*h)->next;
			free(*h);
			*h = demp;
			tin++;
		}
		else
		{
			free(*h);
			*h = NULL;
			tin++;
			break;
}
}
	*h = NULL;
	return (tin);
}
