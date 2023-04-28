#include "lists.h"

/**
  * add_nodeint_end - add node at the end of list
  *
  * @head: head of list
  * @n: value of node
  * Return: pointer to node
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (!(*head) || (*head)->next)
	{
		listint_t *nw_node = malloc(sizeof(listint_t));

		if (!nw_node)
			return (NULL);

		nw_node->n = n;

		if (!(*head))
			*head = nw_node;
		else
			(*head)->next = nw_node;

		return (*head);
	}

	return (add_nodeint_end((*head)->next, n));
}
