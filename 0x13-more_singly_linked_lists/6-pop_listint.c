#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list and returns its data
 * @head: A pointer to a pointer to the head of the list
 *
 * Return: The data (n) of the head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
    if (*head == NULL)
    {
        return (0);
    }

    listint_t *temp = *head;

    int data = temp->n;
    *head = (*head)->next;
    free(temp);

    return (data);
}
