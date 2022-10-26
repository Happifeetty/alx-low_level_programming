#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_listint_safe - prints a singly linked list (can print lists with loop)
 * @head: head pointer of singly linked list
 *
 * Return: Number of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
size_t pichu = 0;
const listint_t *aux_node = head;
if (!head)
exit(98);
while (aux_node)
{
printf("[%p] %i\n", (void *)aux_node, aux_node->n);
aux_node = aux_node->next;
pichu++;
}
return (pichu);
}
