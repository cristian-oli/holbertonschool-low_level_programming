#include "lists.h"
/**
 * free_listint2 - function that frees a listint_t list.
 * @head: the first element of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
	(*head) = NULL;
}
