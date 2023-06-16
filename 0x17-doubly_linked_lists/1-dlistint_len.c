#include "lists.h"

/**
  * dlistint_len - return number of nodes in list
  * @h: pointer to head of list
  * Return: number of nodes
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr_node = h;
	size_t len = 0;

	while (curr_node)
	{
		++len;
		curr_node = curr_node->next;
	}

	return (len);
}
