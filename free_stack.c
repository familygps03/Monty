#include "monty.h"
/**
* free_stack - this is the function that frees
* a doubly linked list
* @head: this is the  head of the stack
*/
void free_stack(stack_t *head)
{
	stack_t *auxiliary;

	auxiliary = head;
	while (head)
	{
		auxiliary = head->next;
		free(head);
		head = auxiliary;
	}
}
