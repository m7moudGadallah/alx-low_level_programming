#include "lists.h"

/**
  * listint_len - get number of elements in list
  *
  * @h: head of list
  * Return: number of elements in list
  */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);

	return (1 + listint_len(h->next));
}
