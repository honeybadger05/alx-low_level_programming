#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to the first node
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *next = NULL;

	if (!head || *!head)
		return (NULL);

	node = *head;
	*jead = NULL;
	while (node)
	{
		next = node->next;
		node->next = *head;
		*head = node;
		node = next;
	}
	return (*head);
}
