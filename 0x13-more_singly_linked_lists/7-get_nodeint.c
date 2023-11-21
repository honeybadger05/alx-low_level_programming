#include "lists.h"
/**
 * get_nodeint_at_index - gets node at index
 * @head: linked list at head
 * @index: index of node to grab
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node;
	unsigned int n;

	for (node = head, n = 0; node && n < index; node->next, n++)
		;
	return (node);
}
