#include "lists.h"
/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (!head || !*head)
		return (0);

	tmp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = tmp;
	return (n);
}
