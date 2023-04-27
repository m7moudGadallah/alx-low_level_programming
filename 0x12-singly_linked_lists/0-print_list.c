#include "lists.h"

/**
  * print_list - traverse all elements in lists
  *
  * @h: pointer to head of list
  *
  * Return: number of elements in list
  */
size_t print_list(const list_t *h)
{
	size_t count_nodes = 0;

	if (!h)
		return (0);

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		++count_nodes;
		h = h->next;
	}

	return (count_nodes);
}
