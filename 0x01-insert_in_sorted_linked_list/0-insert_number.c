#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* insert_node - inserts a number into a sorted singly linked list.
* @head: nodes list
* @number: integer
*
* Return: the address of the new node, or NULL if it failed.
*/
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *current;

	if (!number)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = number;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		if (current->next == NULL && current->n > number)
		{
			new->next = current;
			current = new;
			return (new);
		}

		while (current->next != NULL)
		{
			if (current->next != NULL && current->next->n > number)
			{
				new->next = current->next;
				current->next = new;
				return (new);
			}
			current = current->next;
		}
		current->next = new;
	}
	return (new);
}
