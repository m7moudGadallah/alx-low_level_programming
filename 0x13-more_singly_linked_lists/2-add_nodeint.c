#include "lists.h"

/**
  * add_nodeint - add node to list
  *
  * @head: pointer to head of lists
  * @n: value of node
  * Return: pointer to new node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_node = malloc(sizeof(listint_t));

	if (!nw_node)
		return (NULL);

	nw_node->n = n;

	nw_node->next = *head;
	*head = nw_node;

	return (nw_node);
}
