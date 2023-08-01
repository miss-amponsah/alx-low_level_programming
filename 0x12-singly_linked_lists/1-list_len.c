#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* list_len - check the code for all linked lists.
* @h: name of the list
* Return: the number of nodes.
*/
size_t list_len(const list_t *h)
{
int compute = 0;
while (h)
{
compute++;
h = h->next;
}
return (compute);
}
