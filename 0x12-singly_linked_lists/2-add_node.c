#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * str needs to be duplicated
 * Return the address of the new element, or NULL if it failed
 *
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *lat;
	unsigned int len = 0;

	while (str[len])
		len++;
	lat = malloc(sizeof(list_t));
	if (!lat)
		return (NULL);
	lat->str = strdup(str);
	lat->len = len;
	lat->next = (*head);
	(*head) = lat;
	return (*head);
}
