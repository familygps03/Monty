#include "monty.h"
/**
 * f_pstr - this function prints the string starting
 * at the top of the stack,followed by a new
 * @head: this is the stack head
 * @counter: this is the  line_number
 * Return: this returns nothing
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
