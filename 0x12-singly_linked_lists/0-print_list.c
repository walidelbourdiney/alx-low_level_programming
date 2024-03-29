#include "lists.h"

/**
 * print list - function that prints all the elements of list_t list
 * @h: struct node
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		cnt++;
		h = h->next;
	}

	return (cnt);
}
