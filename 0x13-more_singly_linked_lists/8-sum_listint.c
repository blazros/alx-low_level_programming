#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - ...
  * @head: ...
  *
  * Return: ...
  */
int sum_listint(listint_t *head)
{
	int list_sum = 0;

	if (head)
	{
		while (head)
		{
			list_sum += head->n;
			head = head->next;
		}
	}

	return (list_sum);
}
