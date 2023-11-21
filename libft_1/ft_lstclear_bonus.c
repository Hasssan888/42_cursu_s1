/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:16:19 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/21 15:30:55 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*current;
	t_list	*next;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	next = NULL;
	while (current != NULL)
	{
		next = current->next;
		if (del != NULL)
			del(current->content);
		free(current);
		current = next;
	}
	*lst = NULL;
}
/*
 * void    del_content(void *content)
{
    free(content);
}

int    main(void)
{
    // Create a list with three nodes
    t_list *node1 = malloc(sizeof(t_list));
    node1->content = malloc(sizeof(int));
    *(int *)node1->content = 42;

    t_list *node2 = malloc(sizeof(t_list));
    node2->content = malloc(sizeof(int));
    *(int *)node2->content = 69;

    t_list *node3 = malloc(sizeof(t_list));
    node3->content = malloc(sizeof(int));
    *(int *)node3->content = 99;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Call ft_lstclear to delete the entire list
    ft_lstclear(&node1, del_content);

    // Check if the list was cleared (node1 is now NULL)
    if (node1 == NULL)
        printf("List was successfully cleared.\n");
    else
        printf("List was not cleared.\n");

    return 0;
}*/
