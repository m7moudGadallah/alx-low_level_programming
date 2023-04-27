#include "lists.h"

/**
  * list_len - get number of elements in list
  *
  * @h: head of list
  *
  * Return: number elements in list
  */
size_t list_len(const list_t *h)
{
	if (!h)
		return (0);

	return (1 + list_len(h->next));
}
