#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - Frees a linked list
  * @head: The head of the linked list
  *
  * Return: Nothing
  */
void free_listint(listint_t *head)
{
	listint_t *one_list;

	while (head)
	{
		one_list = head;
		head = head->next;
		free(one_list);
	}

	free(head);
}
