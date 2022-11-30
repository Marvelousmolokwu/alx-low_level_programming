#include "lists.h"
/**
  * insert_nodeint_at_index_inserts a new node
  * @head: head of a list
  * @idx:index of the list where the new node is
  * @n: integer elememt
  * Return: the address of new node, NULL if it fails
  */
listint_t
*insert_nodeint_at_index(listint_t **head, unsigned int idx, it n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;


