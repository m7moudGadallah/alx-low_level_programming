#include "lists.h"

/**
  * add_node_end - add node
  *
  * @head: head of list
  * @str: pointer to string
  *
  * Return: pointer
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));
	list_t *tmp_head;

	if (!node)
		return (NULL);

	node->str = strdup(str);

	if (!node->str)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);

	tmp_head = *head;

	if (!*head)
	{
		*head = node;
		return (node);
	}

	while (tmp_head->next)
		tmp_head = tmp_head->next;

	tmp_head->next = node;

	return (node);
}
