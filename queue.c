#include "monty.h"
/**
 * f_queue - prints the top
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @head: head of the stack
 * Return: no return
*/
void addqueue(stack_t **head, int n)
{
	stack_t *newNode, *auxNode;

	auxNode = *head;
	newNode = malloc(sizeof(stack_t));
	if (newNode == NULL)
	{
		printf("Error\n");
	}
	newNode->n = n;
	newNode->next = NULL;
	if (auxNode)
	{
		while (auxNode->next)
			auxNode = auxNode->next;
	}
	if (!auxNode)
	{
		*head = newNode;
		newNode->prev = NULL;
	}
	else
	{
		auxNode->next = newNode;
		newNode->prev = auxNode;
	}
}
