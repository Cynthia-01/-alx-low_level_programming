#include "lists.h"
#include <stdio.h>

/**
 * free_list - Frees a list_t list
 * @head: A pointer to the list_t list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (haed)
	{
		tmp = head->next;
		free(head->str);
		free(head);

		head = tmp;
	}
}
