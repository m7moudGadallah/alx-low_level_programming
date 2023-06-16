#include "lists.h"

/**
  * add_dnodeint - adds a new node at the begining of a list
  * @head: pointer to head of list
  * @n: int to set in the new node
  * Return: address of new node, or NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
