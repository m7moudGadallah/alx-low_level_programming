#include "lists.h"

/**
  * free_listint2 - free list
  *
  * @head: pointer to head of list
  */
void free_listint2(listint_t **head)
{
	listint_t *curr, *pn;

	if (!head || !*head)
		return;

	curr = *head;

	while (curr)
	{
		pn = curr;
		curr = curr->next;
		free(pn);
	}

	*head = NULL;
}
