#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

//Creating the struck list - Should go on the library


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
		return(0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (res * n);
}

int	check_errors(void)
{
	printf ("ERROR");
	return (0);
}

//Function bellow created a new element on the list


// Function bellow prints all the elements that where added to the list


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

/*b_stack	*organize_3_elements(t_stack *nodea, b_stack *nodeb)
{
    t_stack *temp;
    //printf("organize elements 1\n");
    temp = nodea->next;
    //printf("temp = %d\n", temp->num);
	while (nodea->next)
	{
		if (nodea->num > temp->num)
		{
			nodea = nodea->next;
			temp = nodea->next;
			if (nodea->num > temp->num)
			{
				nodeb = create_new_nodeB();
				nodeb->num1= temp->num;
			}
			else
			{
				nodeb = create_new_nodeB();
				nodeb->num1 = nodea->num;
			}
		}
		nodea = nodea->next;
	}
	return(nodeb);
}*/

int main (int ac, char **av)
{
   t_stack  *first;
   b_stack  *firstb;

   firstb = NULL;
   first = add_elements_to_list(ac, av);
   //firstb = organize_3_elements(first, firstb);
   printList(first);
   //printListb(firstb);

}