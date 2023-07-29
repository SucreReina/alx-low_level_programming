#include <stdio.h>
#include "lists.h"

/**
 *
 * show_list - shows all the elements of a linked list
 * @h: pointer to the list_t list to show
 * Return: the count of nodes shown
 */


size_t print_list(const list_t *h) {
	size_t count = 0;

	while (h != NULL) {
		if (h->str == NULL) {
			printf("[0] (nil)\n");
		} else {
			printf("[%lu] %s\n", count, h->str);
		}

		count++;
		h = h->next;
	}

	return count;
}
