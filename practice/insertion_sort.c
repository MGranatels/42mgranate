/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insertion_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate_ls <mgranate_ls@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 21:45:20 by mgranate_ls       #+#    #+#             */
/*   Updated: 2022/03/19 18:11:12 by mgranate_ls      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

struct Node {
    int data;
    struct Node* next;
};
 
// This function prints contents of linked list starting from
// the given node
void printList(struct Node* n)
{
    while (n != NULL) {
        printf(" %d ", n->data);
        n = n->next;
    }
}
 
int main(int ac, char **av)
{
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    int         i;
    
    i = 1;
    if (ac > 0)
    {
        // allocate 3 nodes in the heap
        
        /*head = (struct Node*)malloc(sizeof(struct Node));
        second = (struct Node*)malloc(sizeof(struct Node));
        third = (struct Node*)malloc(sizeof(struct Node));
 
        head->data = av[1][0] - '0'; // assign data in first node
        head->next = second; // Link first node with second
 
        second->data = av[2][0] - '0'; // assign data to second node
        second->next = third;
 
        third->data = av[3][0] - '0'; // assign data to third node
        third->next = NULL;*/
        while (i < ac)
        {
            head = (struct Node*)malloc(sizeof(struct Node));
            head->data = av[i][0] - '0';
            head->next = NULL;
            //printf("%d ", head->data);
            i++;
        }
    }
    printList(head);
    printf("\n");
    return 0;
}