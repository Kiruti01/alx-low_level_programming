#include "lists.h"

/**
 * pop_listint - delete head node of linked list
 * @head: pointr to first element in linked list
 * Return: the data inside elements that deleted, or 0 if list is empt
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int num;

if (!head || !*head)
return (0);

num = (*head)->n;
temp = (*head)->next;
free(*head);
*head = temp;

return (num);
}
