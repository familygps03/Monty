#include "monty.h"
/**
 * f_pint - this is the function that prints the top
 * @head: this is the stack head
 * @counter: this is the  line_number
 * Return: this returns nothing 
*/
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
