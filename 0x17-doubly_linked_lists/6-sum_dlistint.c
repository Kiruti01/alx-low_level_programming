#include "lists.h"

/**
 * sum_dlistint - Returns sum of all the int vals in doubly linkd list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: The sum of the integer values in the list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
