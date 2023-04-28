#include "lists.h"

/**
  * pop_listint - delete head node
  *
  * @head: pointer to head of list
  * Return: value of deleted node
  */
int pop_listint(listint_t **head)
{
	listint_t *pn;
	int data;

	if (!(*head))
		return (0);

	pn = *head;
	*head = (*head)->next;
	data = pn->n;
	free(pn);

	return (data);
}
