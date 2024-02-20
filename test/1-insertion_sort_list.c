#include "sort.h"

/**
 * insertion_sort_list - Function for sorting linked list
 * using the insertion sort algorithm
 * @list: double pointer to the linked list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *pos_ptr, *change, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	pos_ptr = (*list)->next;
	while (pos_ptr != NULL && temp->prev != NULL)
	{
		change = pos_ptr;
		temp = pos_ptr->prev;
		while (change->n < temp->n)
		{
			pos_ptr = pos_ptr->next;
			temp->next = change->next;
			change->next->prev = temp;
			change->next = temp;
			change->prev = temp->prev;
			temp->prev = change;
			if (change->prev != NULL)
				temp = change->prev;
		}
		while (change->prev != NULL)
		{
			change = change->prev;
		}
		*list = change;
		print_list(*list);
	}
}
