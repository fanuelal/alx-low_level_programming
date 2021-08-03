#include "lists.h"
/**
 * add_nodeint - adding node
 * @head: pointer pointing the listint_t
 * @n: the values of the structure
 * Return: return the new element address
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new = malloc(sizeof(listint_t));
if (!new)
return (NULL);
new->n = n;
new->next = *head;
*head = new;
return (*head);
}
