#include "lists.h"
/**
  * deletes_nodeint_at_index - deletes the node at index
  * @head: head of alist
  * @index: index of the list
  * Return: 1 if it suceeds, -1 if it fails
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	umsigned int i;
	listint_t *prev;
	listint_t *next;

	prev = *head;

	if (index != 0)
	{
		for (i = 0; < index - 1 && prev != NULL; i++)
		{
			prev = prev->next;
		}
	}
	
	if (prev == NULL || (prev->next == NULL && index

