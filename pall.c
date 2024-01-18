#include "monty.h"
/**
 * f_pall - this is function that prints the stack
 * @head: this is  stack head
 * @counter: it is  not used
 * Return: it returns nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
