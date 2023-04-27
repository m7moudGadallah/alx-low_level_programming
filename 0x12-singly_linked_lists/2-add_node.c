#include "lists.h"

/**
  * add_node - add node
  *
  * @head: head of list
  * @str: pointer to string
  *
  * Return: pointer
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node = malloc(sizeof(list_t));

	if (!node)
		return (NULL);

	node->str = strdup(str);

	if (!node->str)
	{
		free(node);
		return (NULL);
	}

	node->len = strlen(str);
	node->next = *head;
	*head = node;

	return (node);
}
