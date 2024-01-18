#include "monty.h"
/**
 * f_mod - this is the function that computes the rest
 * of the division of the second
 * top element of the stack by the top element of the stack
 * @head: this is stack head
 * @counter: this is line_number
 * Return: this returns nothing
*/
void f_mod(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxiliary = h->next->n % h->n;
	h->next->n = auxiliary;
	*head = h->next;
	free(h);
}
