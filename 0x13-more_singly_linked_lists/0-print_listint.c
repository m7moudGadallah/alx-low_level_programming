#include "lists.h"

/**
  * print_listint - traverse all elements in lists
  *
  * @h: head of list
  * Return: number elements in list
  */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;
	const listint_t *pn = h;

	while (pn)
	{
		printf("%d\n", pn->n);

		++count_nodes;
		pn = pn->next;
	}

	return (count_nodes);
}
