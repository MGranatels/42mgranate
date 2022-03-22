#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <ctype.h>
# include <stdio.h>

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

void    printListb(struct b_stack* n);
void    printList(struct s_stack* n);
t_stack *create_new_node(void);
t_stack *add_elements_to_list(int argc, char **argv);
b_stack *create_new_nodeB(void);
int ft_atoi(const char *str);
int check_errors(void);

#endif