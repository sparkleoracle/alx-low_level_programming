#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * returns the sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 *
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *demp = head;

	while (demp)
	{
		sum += demp->n;
		demp = demp->next;
	}
	return (sum);
}
