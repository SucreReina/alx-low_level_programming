#include "lists.h"

/**
 *  * free_listint - frees a linked list of type listint_t.
 *   * @head: pointer to the first node in the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}


