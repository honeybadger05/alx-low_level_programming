#include "lists.h"
/**
 * free_listint2 - frees a list but head is null
 * @head: linked list and head
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *node, *temp;

	if (!head)
		return;

	node =*head;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
