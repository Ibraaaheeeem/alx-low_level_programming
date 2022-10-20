#include "lists.h"
#include <stdio.h>

/**
 * print_list - this function prints
 * the elements of a signly-linked list.
 * @h: The list_t list.
 * Return: The number of nodes in h.
 */

size_t print_list(const list_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%i] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		len += 1;
	}
	return (len);
}
