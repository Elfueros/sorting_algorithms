#include "sort.h"

/**
 * len_list - returns the length of a linked list
 * @h: pointer to the list
 *
 * Return: length of list
 */
int len_list(listint_t *h)
{
	int len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}

/**
 * insertion_sort_list - sorts a linked list with the Insert Sort algorithm
 * @list: double pointer to the list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr = NULL, *one = NULL;
	listint_t *two = NULL, *three = NULL, *four = NULL;

	if (!list || !(*list) || len_list(*list) < 2)
		return;

	curr = *list;

	while (curr)
	{
		if (curr->prev && curr->n < curr->prev->n)
		{
			one = curr->prev->prev;
			two = curr->prev;
			three = curr;
			four = curr->next;

			two->next = four;
			if (four)
				four->prev = two;
			three->next = two;
			three->prev = one;
			if (one)
				one->next = three;
			else
				*list = three;
			two->prev = three;
			curr = *list;
			print_list(*list);
			continue;
		}
		else
			curr = curr->next;
	}
}
/*
#include "sort.h"

**
 * insertion_sort_list - sorts a list of doubly linked integers
 * in ascending order using the Bubble sort algorithm
 * @list: listint_t pointer to pointer; list to sort
 *
 * Return: nothing
 * TheOwl
 *
void insertion_sort_list(listint_t **list)
{
	listint *tmp = *list, *tmp_ins;

	if (tmp == NULL || tmp->next == NULL)
		return;
	while ()
		while (tmp != NULL)
		{
			if (tmp->n > tmp->next->n)
}
*/
