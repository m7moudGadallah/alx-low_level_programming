#include "lists.h"

/**
  * print_dlistint - print all elemetns of a dlistint_t list
  * @h: pointer to head of list
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr_node = h;
	size_t cnt = 0;

	while (curr_node)
	{
		printf("%i\n", curr_node->n);
		cnt++;
		curr_node = curr_node->next;
	}

	return (cnt);
}
