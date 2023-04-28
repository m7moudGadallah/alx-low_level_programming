#include "lists.h"

/**
  * sum_listint - sum data in list
  *
  * @head: head of list
  * Return: sum of elements
  */
int sum_listint(listint_t *head)
{
	if (!head)
		return (0);

	return (head->n + sum_listint(head->next));
}
