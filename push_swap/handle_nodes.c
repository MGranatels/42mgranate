#include "push_swap.h"

t_stack	*create_new_node(void)
{
	t_stack	*first;

	first = (t_stack*)malloc(sizeof(t_stack));
	first->num = 0;
	first->next = NULL;
	return (first);
}

b_stack	*create_new_nodeB(void)
{
	b_stack	*first;

	first = (b_stack*)malloc(sizeof(b_stack));
	if (!first)
	    return (NULL);
	first->num1 = 0;
	first->nextl = NULL;
	return (first);
}

void printList(struct s_stack* n)
{
    int i;

    i = 0;
    printf("List A: ");
    while (n != NULL)
    {
        i++;
        printf("%d ", n->num);
        n = n->next;
    }
    printf("\n");
}

void printListb(struct b_stack* n)
{
    int i;

    i = 0;
    printf("List B: ");
    while (n != NULL)
    {
        i++;
        printf("%d ", n->num1);
        n = n->nextl;
    }
    printf("\n");
}