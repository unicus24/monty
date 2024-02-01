#include "monty.h"
/**
  *f_sub- sustration
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxNode;
	int sus, nodes;

	auxNode = *head;
	for (nodes = 0; auxNode != NULL; nodes++)
		auxNode = auxNode->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxNode = *head;
	sus = auxNode->next->n - auxNode->n;
	auxNode->next->n = sus;
	*head = auxNode->next;
	free(auxNode);
}
