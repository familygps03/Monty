#include "monty.h"
/**
  *f_sub- this is the function that sustration
  *@head: this is the stack head
  *@counter: this is the line_number
  *Return: this returns 
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxiliary;
	int sus, sub_nodes;

	auxiliary = *head;
	for (sub_nodes = 0; auxiliary != NULL; sub_nodes++)
		auxiliary = auxiliary->next;
	if (sub_nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxiliary = *head;
	sus = auxiliary->next->n - auxiliary->n;
	auxiliary->next->n = sus;
	*head = auxiliary->next;
	free(auxiliary);
}
