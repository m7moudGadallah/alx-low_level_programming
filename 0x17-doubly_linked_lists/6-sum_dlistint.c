#include "lists.h"

/**
  * sum_dlistint - return sum of all data in list
  * @head: pointer to the head of list
  * Return: sum of all data in the list, 0 if the lost is empty
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *aux = head;
	int sum = 0;

	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}

	return (sum);
}
