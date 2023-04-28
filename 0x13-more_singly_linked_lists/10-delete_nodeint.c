#include "lists.h"

/**
  * delete_nodeint_at_index- delete node at give pos
  *
  * @head: pointer to head
  * @index: pos
  * Return: (1) for sucess, (-1) otherwise
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ph = *head, *pn = NULL;

	if (!(*head))
		return (-1);

	if (!index)
	{
		pn = *head;
		*head = (*head)->next;
		free(pn);
		return (1);
	}

	while (ph && --index)
		ph = ph->next;

	if (!ph || !ph->next)
		return (-1);

	pn = ph;
	ph->next = ph->next->next;
	free(pn);
	return (1);
}
