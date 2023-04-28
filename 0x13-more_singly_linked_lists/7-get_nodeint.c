#include "lists.h"

/**
  * get_nodeint_at_index - get node at the an index
  *
  * @head: head of list
  * @index: index
  * Return: pointer to node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *pn;

	if (!head)
		return (NULL);

	pn = head;

	while (pn && index)
		pn = pn->next, index--;

	if (!index && pn)
		return (pn);

	return (NULL);
}
