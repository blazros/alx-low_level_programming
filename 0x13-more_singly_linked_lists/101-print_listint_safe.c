#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
  * print_listint - Prints all the elements of a linked list
  * @h: The head of the linked list
  *
  * Return: The number of nodes of the linked list
  */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	listint_t *check;
	check = head;
	
	if (!check || check == NULL)
		exit (98);

	if (check != NULL)
	{
		while (check->next)
		{
			if (!check->next || check == NULL)
				exit (98);

			printf("[%p] %d\n",check->next , check->n);
			check = check->next;
			count++;
		}
	return (count);
	}
}
