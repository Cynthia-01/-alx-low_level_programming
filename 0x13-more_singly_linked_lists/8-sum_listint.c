#include "lists.h"

/**
 * sum_listint - returns the sum of all the dat (n) of a linked list
 * @head: head of a list
 *
 * Return: sum of all the dat (n).
 */
int sum_listint(listint_t *head)
{
	int sum;

	sum = 0;
	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
