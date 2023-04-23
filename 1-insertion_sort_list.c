#include "sort.h"
/**
 * insertion_sort_list - a sorts a list of integers
 * @list: the address of the first element in the dlinkedlist
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp, *holder, *head;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	head = *list;
	temp = head;
	holder = head;

	while (head)
	{
		holder = head;
		head = head->next;
		while (holder->prev && holder->n < holder->prev->n)
		{
			temp = holder->prev;
			if (temp->prev)
				temp->prev->next = holder;
			holder->prev = temp->prev;
			temp->next = holder->next;
			temp->prev = holder;
			holder->next = temp;
			if (temp->next)
				temp->next->prev = temp;
			if (holder->prev == NULL)
				*list = holder;
		print_list(*list);
		}
	}
}
