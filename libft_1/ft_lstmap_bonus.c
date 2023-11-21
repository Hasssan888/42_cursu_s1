/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbakrim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 21:34:32 by hbakrim           #+#    #+#             */
/*   Updated: 2023/11/21 16:53:37 by hbakrim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_elem;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		new_elem = malloc(sizeof(t_list));
		if (new_elem == NULL)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		new_elem->content = f(lst->content);
		new_elem->next = NULL;
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
/*
 * void    *add_one(void *content)
{
    int *value = (int *)content;
    int *new_value = malloc(sizeof(int));
    if (new_value == NULL)
        return (NULL);
    *new_value = *value + 1;
    return (new_value);
}

void    del_content(void *content)
{
    free(content);
}

int    main(void)
{
    // Create a list with three nodes
    t_list *node1 = ft_lstnew(malloc(sizeof(int)));
    *(int *)node1->content = 42;

    t_list *node2 = ft_lstnew(malloc(sizeof(int)));
    *(int *)node2->content = 69;

    t_list *node3 = ft_lstnew(malloc(sizeof(int)));
    *(int *)node3->content = 99;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    // Call ft_lstmap to create a new list with incremented values
    t_list *new_list = ft_lstmap(node1, add_one, del_content);

    // Print the content of the new list
    t_list *current = new_list;
    while (current != NULL)
    {
        printf("%d ", *(int *)current->content);
        current = current->next;
    }

    // Clear the new list
    ft_lstclear(&new_list, del_content);

    return 0;
}*/
