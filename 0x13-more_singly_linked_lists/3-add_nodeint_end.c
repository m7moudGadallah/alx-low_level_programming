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
	listint_t *tmp_head = *head,
			  *nw_node = malloc(sizeof(listint_t));

	if (!nw_node)
		return (NULL);

	nw_node->n = n;

	if (!tmp_head)
	{
		*head = nw_node;
		return (nw_node);
	}

	while (tmp_head->next)
		tmp_head = tmp_head->next;

	tmp_head->next = nw_node;

	return (nw_node);
}
