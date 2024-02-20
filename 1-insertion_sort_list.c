#include "sort.h"

/**
 * insertion_sort_list - Function for sorting linked list
 * using the insertion sort algorithm
 * @list: double pointer to the linked list to be sorted
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *current_node, *insertion_point, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	for (current_node = (*list)->next; current_node != NULL; current_node = temp)
	{
		temp = current_node->next;
		insertion_point = current_node->prev;
		while (insertion_point != NULL && current_node->n < insertion_point->n)
		{
			custom_swap_nodes(list, &insertion_point, current_node);
			print_list((const listint_t *)*list);
		}
	}
}

/**
 * custom_swap_nodes - Swap two nodes in a listint_t doubly-linked list.
 * @head: A pointer to the head of the doubly-linked list.
 * @node1: A pointer to the first node to swap.
 * @node2: The second node to swap.
 */
void custom_swap_nodes(listint_t **head, listint_t **node1, listint_t *node2)
{
	(*node1)->next = node2->next;
	if (node2->next != NULL)
		node2->next->prev = *node1;
	node2->prev = (*node1)->prev;
	node2->next = *node1;
	if ((*node1)->prev != NULL)
		(*node1)->prev->next = node2;
	else
		*head = node2;
	(*node1)->prev = node2;
	*node1 = node2->prev;
}
