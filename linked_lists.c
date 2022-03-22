#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

//Creating the struck list - Should go on the library
typedef struct		s_stack
{
	int				num;
	struct s_stack	*next;
}                   t_stack;

typedef struct		b_stack
{
	int				num1;
	struct b_stack	*nextl;
}                   b_stack;

//Needed to convert the arguments received in to nbr
int	ft_atoi(const char *str)
{
	int	i;
	int	n;
	int	res;

	n = 1;
	i = 0;
	res = 0;
	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n *= -1;
		i++;
	}
	if (str[i] < '0' || str[i] > '9')
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * n);
}

//Function bellow created a new element on the list
t_stack	*create_new_node(void)
{
	t_stack	*first;

	first = (t_stack*)malloc(sizeof(t_stack));
	first->num = 0;
	first->next = NULL;
	return (first);
}

b_stack	*create_new_nodeb(void)
{
	b_stack	*first;

	first = (b_stack*)malloc(sizeof(b_stack));
	first->num1 = 0;
	first->nextl = NULL;
	return (first);
}

// Function bellow prints all the elements that where added to the list
void printList(struct s_stack* n)
{

    while (n != NULL) 
    {
        printf("Nbr of List A: %d ",n->num);
        n = n->next;
    }
    printf("\n");
}

void printListb(struct b_stack* n)
{
    while (n != NULL) 
    {
        printf(".Nbr of List B: %d ", n->num1);
        n = n->nextl;
    }
    printf("\n");
}

t_stack *add_elements_to_list(int argc, char **argv)
{
	int		i;
	t_stack	*first;
	t_stack	*tmp;

	i = 1;
	first = create_new_node();
	tmp = first;
	while (i < argc)
	{
		tmp->num = ft_atoi(argv[i]);
		if (i < argc - 1)
		{
			tmp->next = create_new_node();
			tmp = tmp->next;
		}
		i++;
	}
	return (first);
}

int main (int ac, char **av)
{
   t_stack  *first;
   b_stack  *firstb;

   firstb = (b_stack*)malloc(sizeof(b_stack));
   first = add_elements_to_list(ac, av);
   first->num += 5; 
   firstb->num1 = first->num;
   firstb->nextl = NULL;
   printList(first);
   printf("What the fuck");
   //printListb(firstb);
}