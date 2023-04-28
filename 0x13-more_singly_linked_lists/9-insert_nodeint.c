#include "lists.h"

/**
  * insert_nodeint_at_index - insert node in a given pos
  *
  * @head: pointer to head
  * @n: value
  * Return: pointer to node
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ph, *nw_node;

	if (!idx)
	{
		return (add_nodeint_end(head, n));
	}

	if (!(*head))
		return (NULL);

	ph = *head;
	nw_node = malloc(sizeof(listint_t));

	if (!nw_node)
		return (NULL);
	
	while (ph && --idx)
		ph = ph->next;

	if (!idx)
	{
		if (!ph)
		{
			nw_node->next = ph->next;
			ph->next = nw_node;
		}
		else
			ph = nw_node;
	}
	else
		return (NULL);

	return (nw_node);
}
