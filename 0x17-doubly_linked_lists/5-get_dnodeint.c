#include "lists.h"

/**
  * get_dnodeint_at_index - return the nth node from list
  * @head: pointer to head of list
  * @index: nth node
  * Return: nth node, if node doesn't exist, return NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	unsigned int cnt = 0;

	while (node && cnt != index)
	{
		++cnt;
		node = node->next;
	}

	if (node && cnt == index)
		return (node);
	return (NULL);
}
