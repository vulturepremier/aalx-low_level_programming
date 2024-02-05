#include "lists.h"
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = *head;
	listint_t *temp = NULL;


	temp = malloc(sizeof(listint_t));
	if (!temp)
		return (NULL);
	temp->next = NULL;
	temp->n = n;
	if ((*head) == NULL)
		{
			*head = temp;
			return (temp);
		};
	while(ptr != NULL)
		ptr = ptr->next;
	ptr->next = temp;
	return (temp);
}
