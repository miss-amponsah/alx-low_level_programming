#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* _strlen - A function that returns the length of a string.
* @x : x is a character
* Return: value is n
*/
int _strlen(const char *x)
{
int n = 0;
while (x[n] != '\0')
{
n++;
}
return (n);
}
/**
* add_node - adds new node to the beginning of list_t list.
* @head: head of a list_t list.
* @str: value to insert into element.
* Return: the number of nodes.
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *add;
add = malloc(sizeof(list_t));
if (add == NULL)
return (NULL);
add->str = strdup(str);
add->len = _strlen(str);
add->next = *head;
*head = add;
return (add);
}
