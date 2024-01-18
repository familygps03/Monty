#include "monty.h"
/**
 * f_push - this is the function that add node to the stack
 * @head: this is the stack head
 * @counter: this is the  line_number
 * Return: this returns nothing
*/
void f_push(stack_t **head, unsigned int counter)
{
	int l, n = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			n++;
		for (; bus.arg[n] != '\0'; n++)
		{
			if (bus.arg[n] > 57 || bus.arg[n] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	l = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, l);
	else
		addqueue(head, l);
}
