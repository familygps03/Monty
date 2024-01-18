#include "monty.h"
/**
 * addnode - this is the function that add node to the head stack
 * @head: this is the head of the stack
 * @n: this is the  new_value
 * Return: this returns nothing
*/
void addnode(stack_t **head, int n)
{

	stack_t *new_node, *auxiliary;

	auxiliary = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (auxiliary)
		auxiliary->prev = new_node;
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
