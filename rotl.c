#include "monty.h"
/**
  *f_rotl- this is the function that rotates the stack to the top
  *@head: this is the stack head
  *@counter: this is the  line_number
  *Return: this returns nothing
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *temp = *head, *auxiliary;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxiliary = (*head)->next;
	auxiliary->prev = NULL;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = temp;
	(*head) = auxiliary;
}
