#include "lists.h"
/**
 * free_lisintt - frees a linked list
 * @head: list_t list to be freed
 */
void free_listint(listint_t *head)
{
list_t *temp;
while (head)
temp = head->next;
free(head->n);
free(head);
head = temp;
}
