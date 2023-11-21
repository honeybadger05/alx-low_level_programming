#include "lists.h"
/**
 * free_listint - frees the list
 * @head: head of struct
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = tmp->next;
		free(tmp);
	}
}
