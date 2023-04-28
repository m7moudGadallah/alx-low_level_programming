#include "lists.h"

/**
  * free_listint - free list
  *
  * @head: head of list
  */
void free_listint(listint_t *head)
{
	listint_t *ph = head,
			  *pn = NULL;

	while (ph)
	{
		pn = ph;
		ph = ph->next;
		free(pn);
	}
}
