#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list. 
 * @h: Pointer to the head of the linked list.
 * Return: The number of nodes in the linked list.
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;
	const listint_t *current_node = h;


	Traverse the list and print elements
		while (current_node != NULL)
		{
			printf("%d\n", current_node->n);
			current_node = current_node->next;
			node_count++;
		}

	return (node_count);
}
