# include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end list
  * @head: head of list
  * @n: value of new node
  * Return: address of new element, NULL if it failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *aux = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		new->prev = aux;
		aux->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);
}
