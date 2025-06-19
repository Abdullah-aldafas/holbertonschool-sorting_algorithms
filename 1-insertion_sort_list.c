#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * swap_nodes - Swap two nodes in a doubly linked list
 * @list: Pointer to the head of the list
 * @left: Left node
 * @right: Right node
 */

void swap_nodes(listint_t **list, listint_t *left, listint_t *right)
{
	if (left == NULL || right == NULL || list == NULL || *list == NULL)
		return;
	if (left->prev)
		left->prev->next = right;
	else
		*list = right;
	if (right->next)
		right->next->prev = left;
	left->next = right->next;
	right->prev = left->prev;
	left->prev = right;
	right->next = left;
}
/**
 * insertion_sort_list - Sort a doubly linked list using insertion sort
 * @list: Pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	current = (*list)->next;
	while (current)
	{
		temp = current;
		while (temp->prev && temp->n < temp->prev->n)
		{
			swap_nodes(list, temp->prev, temp);
			print_list(*list);
		}
		current = temp->next;
	}
}
