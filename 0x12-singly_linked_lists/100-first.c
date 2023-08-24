#include <stdlib.h>
#include "lists.h"

/**
 * frees a linked list
 * @head: list_t list to be freed
 * No return
 */

void free_list(list_t *head)

{
	list_t *temp;

	while (head)
	{
		free(head->str);
		free(head);
		head = temp;
	}
}

