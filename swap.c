#include "monty.h"
/**
 * f_swap - this is the function that  adds the top
 * two elements of the stack.
 * @head: this is the  stack head
 * @counter: this is the line_number
 * Return: this returns nothing
*/
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int length = 0, auxiliary;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auxiliary = h->n;
	h->n = h->next->n;
	h->next->n = auxiliary;
}
