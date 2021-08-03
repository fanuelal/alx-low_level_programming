#include "lists.h"
/**
 * add_nodeint_end - adding node
 * @head: pointer pointing the listint_t
 * @n: the values of the structure
 * Return: return the new element address
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
int count = 0;
listint_t *new = malloc(sizeof(listint_s));
if (!new)
return (NULL);
new->n = n
new->next = *head;
*head = new;
return (*head);
}
