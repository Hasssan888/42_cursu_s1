/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:26:07 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/21 15:37:02 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	if (lst == NULL || f == NULL)
		return ;
	current = lst;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}
/*void    print_content(void *content)
{
    int *value = (int *)content;
    printf("%d ", *value);
}

int    main(void)
{
    // Create a list with three nodes
    t_list *node1 = malloc(sizeof(t_list));
    int value1 = 42;
    node1->content = &value1;
    
    t_list *node2 = malloc(sizeof(t_list));
    int value2 = 69;
    node2->content = &value2;
    
    t_list *node3 = malloc(sizeof(t_list));
    int value3 = 99;
    node3->content = &value3;
    
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Call ft_lstiter to print the content of each node
    ft_lstiter(node1, print_content);

    return 0;
}*/
